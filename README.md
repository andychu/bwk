This is Kernighan's awk, a.k.a. "One True Awk", with the source code and test
suite combined.  It includes some fairly extensive cleanups and enhancements
related to build and test automation.

Original source: https://www.cs.princeton.edu/~bwk/btl.mirror/ (as of
2016/7/20, the latest update is from 2012/12/20)

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

3) Select one of the 5 test suites (see below), and run it against an
instrumented binary.  For example:

    $ cd tests
    $ ./test.sh compare_t ../bwk-asan

This runs a subset of tests with an ASAN-instrumented binary.  I currently get
one `heap-use-after-free` error (see `test-results/asan.log`).

Details
-------

`test.sh` has a few entry points.  They correspond to what was documented in
`tests/README.TESTS` and automated with `tests/REGRESS`.

These tests have golden output, and thus are are independent of the system awk:

- `./test.sh golden` `(T.*)`

These tests require a previous awk binary, e.g. a system awk or previous bwk
binary:

- `./test.sh compare_t` (`t.*`) -- "random sampling of awk constructions
  collected over the years"
- `./test.sh compare_lilly` (`lilly.*`) -- "miscelleanous RE tests from Bruce
  Lilly"
- `./test.sh compare_book` (`p.*`) -- tests from "The AWK Programming
  Environment" book
- `./test.sh compare_perf` (`tt.**`) -- performance tests

NOTE: Some shell scripts in the test directory still hard-code `../a.out`.  I
wanted to change it to always use a variant like `../bwk` or `../bwk-asan`.
Instead of changing everything, _prepare_bin makes `a.out` to the selected
variant.

TODO
----

- Show nice coverage output
- Automate the cross product of (test suite, sanitizer)
