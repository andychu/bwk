# /****************************************************************
# Copyright (C) Lucent Technologies 1997
# All Rights Reserved
# 
# Permission to use, copy, modify, and distribute this software and
# its documentation for any purpose and without fee is hereby
# granted, provided that the above copyright notice appear in all
# copies and that both that the copyright notice and this
# permission notice and warranty disclaimer appear in supporting
# documentation, and that the name Lucent Technologies or any of
# its entities not be used in advertising or publicity pertaining
# to distribution of the software without specific, written prior
# permission.
# 
# LUCENT DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
# INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS.
# IN NO EVENT SHALL LUCENT OR ANY OF ITS ENTITIES BE LIABLE FOR ANY
# SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER
# IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION,
# ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF
# THIS SOFTWARE.
# ****************************************************************/

# CLANG_DIR should be set to build and run tests under sanitizers.
ifdef CLANG_DIR
	san_cc := $(CLANG_DIR)/bin/clang
else
	san_cc := clang
endif

# -d: produce a header file
# -y: emulate POSIX yacc
YFLAGS := -d -y

obj_files := \
	b.o \
	main.o \
	parse.o \
	proctab.o \
	tran.o \
	lib.o \
	run.o \
	lex.o \
	ytab.o

default: bwk-dbg

all: bwk bwk-dbg bwk-cov bwk-asan bwk-msan bwk-ubsan bwk-sancov-func test_bin

test_bin: tests/echo tests/time

HEADER_DEPS := awk.h ytab.h proto.h

compile_c = $(CC) $(CFLAGS) -c -o $@ $<

# TODO: Remove all this duplication.  Options:
# - eval ?
# - shell script to gen fragments, and then include?  Like .d fragments.

# Compile objects
_obj/bwk/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk
	$(compile_c)

_obj/bwk-dbg/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-dbg
	$(compile_c)

_obj/bwk-cov/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-cov
	$(compile_c)

_obj/bwk-asan/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-asan
	$(compile_c)

_obj/bwk-msan/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-msan
	$(compile_c)

_obj/bwk-ubsan/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-ubsan
	$(compile_c)

_obj/bwk-sancov-func/%.o: %.c $(HEADER_DEPS)
	mkdir -p _obj/bwk-sancov-func
	$(compile_c)

# NOTE: What is ALLOC used for?  Specify a different allocator, I guess.
link_bwk = $(CC) -o $@ $(CFLAGS) $^ $(ALLOC) -lm

# "release" target, stripped
bwk: CFLAGS += -O4 -Wall -pedantic -fno-strict-aliasing
bwk: $(addprefix _obj/bwk/,$(obj_files))
	$(link_bwk)
	strip bwk

# "debug" target compiles faster
bwk-dbg: CFLAGS += -Wall -pedantic 
bwk-dbg: $(addprefix _obj/bwk-dbg/,$(obj_files))
	$(link_bwk)

# Build instrumented for coverage.
# gcov f1.c; cat f1.c.gcov
bwk-cov: CFLAGS += -fprofile-arcs -ftest-coverage
bwk-cov: $(addprefix _obj/bwk-cov/,$(obj_files))
	$(link_bwk)

# Binaries built with Clang sanitizers.  All of these should be unstripped
# because they show stack traces at runtime.
bwk-asan: CC := $(san_cc)
bwk-asan: CFLAGS += -fsanitize=address -g
bwk-asan: $(addprefix _obj/bwk-asan/,$(obj_files))
	$(link_bwk)

bwk-msan: CC := $(san_cc)
bwk-msan: CFLAGS += -fsanitize=memory -g
bwk-msan: $(addprefix _obj/bwk-msan/,$(obj_files))
	$(link_bwk)

bwk-ubsan: CC := $(san_cc)
bwk-ubsan: CFLAGS += -fsanitize=undefined -fno-omit-frame-pointer -g
bwk-ubsan: $(addprefix _obj/bwk-ubsan/,$(obj_files))
	$(link_bwk)

# NOTES:
# - Coverage works on top of top of sanitizers.  Just pick one I guess.
# - There are different types of coverage, e.g. -fsanitize-coverage = func, bb
#   or edge.  Picking one for now.
bwk-sancov-func: CC := $(san_cc)
bwk-sancov-func: CFLAGS += -fsanitize=memory -g -fsanitize-coverage=func
bwk-sancov-func: $(addprefix _obj/bwk-sancov-func/,$(obj_files))
	$(link_bwk)

#
# Code Generation
#

ytab.c ytab.h: awk.h proto.h awkgram.y
	$(YACC) -o ytab.c $(YFLAGS) awkgram.y

proctab.c: maketab
	./maketab >proctab.c

maketab: ytab.h maketab.c
	$(CC) $(CFLAGS) maketab.c -o maketab

#
# Test utils
#

tests/echo: tests/echo.c
tests/time: tests/time.c

#
# Release
#

source := awk.h ytab.c ytab.h proto.h awkgram.y lex.c b.c main.c \
	maketab.c parse.c lib.c run.c tran.c proctab.c 

ship := README FIXES $(source) ytab[ch].bak makefile awk.1

bundle:
	@cp ytab.h ytabh.bak
	@cp ytab.c ytabc.bak
	@bundle $(ship)

tar:
	@cp ytab.h ytabh.bak
	@cp ytab.c ytabc.bak
	@bundle $(ship) >awk.shar
	@tar cf awk.tar $(ship)
	gzip awk.tar
	ls -l awk.tar.gz
	@zip awk.zip $(ship)
	ls -l awk.zip

clean:
	rm -r -f _obj
	rm -f \
		bwk bwk-* maketab \
		*.bb *.bbg *.da \
		proctab.c ytab.c ytab.h \
		tests/echo tests/time

.PHONY: clean
.PHONY: bundle tar names
