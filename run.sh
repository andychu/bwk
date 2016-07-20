#!/bin/bash
#
# Usage:
#   ./run.sh <function name>

set -o nounset
set -o pipefail
set -o errexit

download() {
  mkdir -p _tmp
  wget --directory _tmp \
    'https://www.cs.princeton.edu/~bwk/btl.mirror/awk.tar.gz'
  wget --directory _tmp \
    'https://www.cs.princeton.edu/~bwk/btl.mirror/awktest.a'
}

count() {
  ls *.[chy] | grep -v -E 'ytab|proctab' | xargs wc -l | sort -n
}

coverage() {
  mkdir -p _gcov
  rm --verbose _gcov/*

  # After running tests with bwk-cov, .gcno and .gcda files are in
  # obj/bwk-cov, next to the objects.
  gcov --object-directory obj/bwk-cov/ *.c
  mv *.gcov _gcov
}

"$@"
