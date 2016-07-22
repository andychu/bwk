#!/bin/sh
#
# Test driver.
#
# TODO: Import busybox tests?  Need the "testing" framework.

set -o nounset

die() {
  echo "$0: $@" 1>&2
  exit 1
}

readonly CLANG_DIR=${CLANG_DIR:-}

if test -z "$CLANG_DIR"; then
  die 'CLANG_DIR should be set.  See env.sh'
fi

# A constant that is used by a lot of the original test scripts.  Since we
# don't want to change it all those files, we make a symlink like ../a.out ->
# bwk-asan, so we can run tests against arbitrary build variants.
readonly AWK_SYMLINK=../a.out  # relative to tests/ dir

_print_header() {
  local oldawk=$1
  local newawk=$2

  uname -a
  echo "Comparing $newawk vs old $oldawk"
}

# ../a.out is hard-coded, so we have to use it
_prepare_bin() {
  local awk=$1

  make $awk test_bin

  ln -s -f --verbose $awk a.out
}

setup() {
  mkdir -p _tmp
  ln -s -f --verbose /bin/busybox _tmp/awk
}

# We have the expected data
golden() {
  local awk=${1:-bwk}

  for i in T.*; do 
    awk=$AWK_SYMLINK ./$i
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

  for i in p.*; do
    echo "$i:"
    $oldawk -f $i test.countries test.countries >foo1 
    $AWK_SYMLINK -f $i test.countries test.countries >foo2 
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
  awk -v awk=$AWK_SYMLINK "$test_runner" <lilly.progs >foo2 2>&1

  echo "Ran $(wc -l lilly.progs) lilly tests"

  if ! diff foo1 foo2 >lilly.diff; then
    echo 'FAILED: T.lilly, see lilly.diff'
    cat lilly.diff
  fi
  echo
}

# Compare vs another version
compare_misc() {
  local oldawk=${1:-awk}
  local newawk=${2:-bwk}

  _print_header $oldawk $newawk

  for i in t.*; do
    echo "$i:"
    $oldawk -f $i test.data >foo1 
    $AWK_SYMLINK -f $i test.data >foo2 
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

    $time $AWK_SYMLINK -f $i $td >foo1 2>foo1t
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

# NOTE: Sanitizer coverage doesn't have contention on counters, but bwk is
# single-threaded so we don't care.

# NOTE: Clang 3.8 has sancov.py; moving to sancov?
sancov() {
  # -covered-functions
  # -not-covered-functions
  local action='-print'
  local action='-covered-functions'
  local action='-not-covered-functions'

  # This one is only in clang 4.0?
  #local action='-html-report'

  $CLANG_DIR/bin/sancov $action -obj ../bwk-sancov-func \
    _tmp/cov/*.sancov
}

# Different tool
# http://llvm.org/docs/CoverageMappingFormat.html
llvm_cov() {
  $CLANG_DIR/bin/llvm-cov "$@"
}

usage() {
  cat <<EOF
  $0 suite SUITE [MODE]
  
  SUITE is one of: golden, misc, book, lilly, perf, ALL
  MODE is one of: none, asan, msan, ubsan, cov (default none)

EOF
}

suite() {
  if test $# -eq 0; then
    usage
    die "Suite required"
  fi

  local suite=$1  # golden, misc, book, lilly, perf
  local mode=${2:-none}  # none, asan, msan, ubsan, cov

  local bin
  case $mode in 
    none)
      bin=bwk
      ;;
    asan)
      bin=bwk-asan
      ;;
    msan)
      bin=bwk-msan
      ;;
    ubsan)
      bin=bwk-ubsan
      ;;
    cov)
      # Creates _obj/bwk-cov/*.gcda
      bin=bwk-cov
      # Clear out the old data first.
      rm --verbose _obj/bwk-cov/*.gcda
      ;;
    sancov)
      bin=bwk-sancov-func

      local dir=_tmp/sancov
      mkdir -p $dir

      # NOTE: Makefile builds on top of MSAN
      export MSAN_OPTIONS="coverage=1:coverage_dir=$dir"
      ;;
    *)
      usage
      die "Invalid mode '$mode'"
      ;;
  esac

  _prepare_bin $bin

  cd tests/  # Test functions assume this (no pushd in dash)

  case $suite in
    golden) golden $bin ;;

    # for all the comparisons, compare against default 'awk'
    misc)   compare_misc '' $bin ;;
    book)   compare_book '' $bin ;;
    lilly)  compare_lilly '' $bin ;;
    perf)   compare_perf '' $bin ;;

    # Run all so coverage is unified
    ALL)
      golden $bin
      compare_misc '' $bin
      compare_book '' $bin
      compare_lilly '' $bin
      compare_perf '' $bin
      ;;
    *)
      usage; die "Invalid test suite '$suite'"
      ;;
  esac

  cd ..

  case $mode in
    cov)
      local out=_gcov/${suite}.html
      ./run.sh cov-html $out
      ;;
  esac
}

if test $# -eq 0; then
  usage
  die "Arguments required"
fi

"$@"
