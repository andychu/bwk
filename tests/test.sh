#!/bin/sh
#
# Test driver.
#
# TODO: Import busybox tests?  Need the "testing" framework.

set -o nounset

# TODO: share with run.sh/
CLANG_DIR=~/install/clang+llvm-3.8.0-x86_64-linux-gnu-ubuntu-14.04
# dash weirdness; ~ is not expanded unless we do it separately?
# http://stackoverflow.com/questions/8441473/tilde-expansion-doesnt-work-when-i-logged-into-gui
readonly CLANG_DIR
readonly sym=$CLANG_DIR/bin/llvm-symbolizer

# These are needed to show line numbers in stack traces.
export ASAN_SYMBOLIZER_PATH=$sym
export MSAN_SYMBOLIZER_PATH=$sym
export UBSAN_SYMBOLIZER_PATH=$sym

gcc echo.c -o echo && echo echo compiled

# A constant that is used by all the tests.  Not changing this.
readonly AWK=../a.out

_print_header() {
  local oldawk=$1
  local newawk=$2

  uname -a
  echo "Comparing $newawk vs old $oldawk"
}

# ../a.out is hard-coded, so we have to use it
_prepare_bin() {
  local awk=$1

  ( cd .. && make $awk test_bin )  # NOTE: pushd is not in /bin/sh

  ln -s -f --verbose $awk ../a.out
}

setup() {
  mkdir -p _tmp
  ln -s -f --verbose /bin/busybox _tmp/awk
}

# We have the expected data
golden() {
  local awk=${1:-bwk}

  _prepare_bin $awk

  for i in T.*; do 
    awk=$AWK ./$i
  done
  # TODO: Do the tests all use $awk, or a.out too?
  echo "Ran $(grep '$awk' T.* | wc -l) test cases"
  echo
}

# Wow, this exposes tons of divergences and bugs.
# NOTE: Tests are not consistent because "BAD" is not always echoed to stderr!
# Sometimes it goes to stdout.

golden_all() {
  #golden /usr/bin/mawk > _tmp/golden-mawk.log
  golden /usr/bin/gawk > _tmp/golden-gawk.log
  #golden _tmp/awk      > _tmp/golden-busybox.log

  grep FAIL _tmp/golden-*.log
}

# Compare vs another version -- book examples
compare_book() {
  local oldawk=${1:-awk}
  local newawk=${2:-bwk}

  _print_header $oldawk $newawk
  _prepare_bin $newawk

  for i in p.*; do
    echo "$i:"
    $oldawk -f $i test.countries test.countries >foo1 
    $AWK -f $i test.countries test.countries >foo2 
    if ! cmp -s foo1 foo2; then
      echo -n "$i: FAILED"
    fi
    diff -b foo1 foo2 | sed -e 's/^/	/' -e 10q
  done

  echo "Ran $(ls p.* | wc -l) test files"
  echo
}

# A list of one line programs in lilly.progs, read from lilly.ifile
compare_lilly() {
  local oldawk=${1:-awk}
  local newawk=${2:-bwk}

  _print_header $oldawk $newawk
  _prepare_bin $newawk

  mkdir -p _tmp
  local test_runner='
/./ {
  tmp = "_tmp/lilly_line"
  print $0 > tmp
  print "###", NR, $0
  cmd = awk " -f " tmp " < lilly.ifile "
  system(cmd)
  close(tmp)
}' 

  # NOTE: Somehow './time' doesn't work here
  awk -v awk=$oldawk "$test_runner" <lilly.progs >foo1 2>&1
  awk -v awk=$AWK "$test_runner" <lilly.progs >foo2 2>&1

  echo "Ran $(wc -l lilly.progs) lilly tests"

  if ! diff foo1 foo2 >lilly.diff; then
    echo 'FAILED: T.lilly, see lilly.diff'
    cat lilly.diff
  fi
  echo
}

# Compare vs another version
compare_t() {
  local oldawk=${1:-awk}
  local newawk=${2:-bwk}

  _print_header $oldawk $newawk
  _prepare_bin $newawk

  for i in t.*; do
    echo "$i:"
    $oldawk -f $i test.data >foo1 
    $AWK -f $i test.data >foo2 
    if ! cmp -s foo1 foo2; then
      echo -n "$i: FAILED"
    fi
    # indent the diff
    diff -b foo1 foo2 | sed -e 's/^/	/' -e 10q
  done

  echo "Ran $(ls t.* | wc -l) test files"
  echo
}

# Creates a file called foo.td
_create_perf_data() {
  cat td.1 td.1 >foo.td
  sed 's/^........................//' td.1 >>foo.td
  pr -m td.1 td.1 td.1 >>foo.td
  pr -2 td.1 >>foo.td
  cat bib >>foo.td
  wc foo.td
}

# Perf tests on big data.
#
# TODO: Assert that a.out points to bwk, for speed?  Though when you run
# coverage and ASAN, you don't want this.
compare_perf() {
  local oldawk=${1:-awk}
  local newawk=${2:-bwk}

  _print_header $oldawk $newawk
  _prepare_bin $newawk

  time=./time

  _create_perf_data

  # an arbitrary collection of input data
  local td=foo.td
  # Is this like touch?
  >_tmp/perf_timing.log

  for i in tt.*; do
    echo $i "($oldawk vs $newawk)":
    # ind <$i
    $time $oldawk -f $i $td >foo2 2>foo2t
    cat foo2t
    $time $AWK -f $i $td >foo1 2>foo1t
    cat foo1t
    cmp foo1 foo2

    # Accumulate timing
    echo $i: >>_tmp/perf_timing.log
    cat foo1t foo2t >>_tmp/perf_timing.log
  done

  ./ctimes _tmp/perf_timing.log

  echo "Ran $(ls tt.* | wc -l) test files"
  echo
}

# mawk < gawk < bwk < busybox awk in terms of running time.
compare_perf_all() {
  # TODO: Write reports to different files.
  #compare_perf /usr/bin/mawk
  #compare_perf /usr/bin/gawk

  # busybox awk
  compare_perf _tmp/awk
}

"$@"
