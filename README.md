This is Kernighan's awk, a.k.a. "One True Awk", with the source code and test
suite combined.  It includes some fairly extensive cleanups and enhancements
related to build and test automation.

Original source: https://www.cs.princeton.edu/~bwk/btl.mirror/ (as of the
latest update is from 2012/12/20)

Another mirror, without the build and test changes:
https://github.com/onetrueawk/awk

Instructions
------------

1) Download Clang binaries from http://llvm.org/releases/

Modify `CLANG_DIR` in `env.sh` as appropriate.  (Notice I'm using Clang 3.8 on
Ubuntu 14.04.)

2) Run `make all`.  You should get a bunch of `bwk-*` executables, which are
build variants with runtime instrumentation added by LLVM sanitizers (Address
Sanitizer, etc.)

3) 

   $ cd tests
   $ ./test.sh compare_t ../bwk-asan

This runs a subset of tests with an ASAN-instrumented binary.  I currently get
one `heap-use-after-free` error (see `test-results/asan.log`).

Details
-------

TODO: Document what README.TESTS did, and the differences.

NOTE: Shell scripts in the test directory still hard-code `../a.out` in some
cases.  I wanted to change it to always use a variant like `../bwk` or
`../bwk-asan`.  Instead of changing everything, _prepare_bin makes `a.out` to
the selected variant.
