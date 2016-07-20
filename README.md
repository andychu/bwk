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

This ASAN error can reproduced without the test suite:

    $ export ASAN_SYMBOLIZER_PATH=$CLANG_DIR/bin/llvm-symbolizer 
    $ ./bwk-asan -f tests/t.split2a </dev/null

Details
-------

`test.sh` has a few entry points.  They correspond to what was documented in
`tests/README.TESTS` and automated with `tests/REGRESS`.

These tests have golden output:

- `./test.sh golden` `(T.*)`
  - This includes `T.beebe` which runs the scripts in `tests/beebe` ("tests from
    Nelson Beebe from gawk test suite")

These tests require another awk binary, e.g. a system awk or previous `bwk`
binary:

- `./test.sh compare_t` (`t.*`) -- "random sampling of awk constructions
  collected over the years"
- `./test.sh compare_lilly` (`lilly.*`) -- "miscellaneous RE tests from Bruce
  Lilly"
- `./test.sh compare_book` (`p.*`) -- tests from "The AWK Programming
  Environment" book
- `./test.sh compare_perf` (`tt.**`) -- performance tests

Summary of Changes
------------------

- Minor fixes to run on Linux/Ubuntu (e.g. yacc/bison invocation; don't assume '.' is in $PATH).
  Sorry Windows support was probably broken in the process.
- Added build variants for LLVM sanitizers (`make all`).  Removed generated files from the repo.
- Rewrote and cleaned up the test suite, allowing it to run against arbitrary
  build variants.  There were also some cleanups like expanding the "beebe.tar"
  file into tests/beebe, instead of untarring it on every test run.

The last two changes are can be seen in commit
[759a20da421e4a049c7a22e4e9e791e5b82e8b94](https://github.com/andychu/bwk/commit/759a20da421e4a049c7a22e4e9e791e5b82e8b94)

The actual source code hasn't changed.  Running the tests against instrumented
binaries HAS revealed some bugs, which could be fixed.  But I haven't fixed
them, since I lost the original motivation for hacking on this codebase (seeing
if Awk could be turned into a more modern language.)

TODO
----

- Show nice coverage output
- Automate the cross product of (test suite, sanitizer)
