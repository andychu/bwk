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

# This gcc tool gives you text.
cov-report() {
  mkdir -p _gcov
  rm --verbose -f _gcov/*

  # After running tests with bwk-cov, .gcno and .gcda files are in
  # obj/bwk-cov, next to the objects.
  gcov --object-directory _obj/bwk-cov/ *.c
  mv --verbose *.gcov _gcov
}

gcovr() {
  _tmp/gcovr-3.2/scripts/gcovr "$@"
}

# http://gcovr.com/guide.html
# Hm Ubuntu has version 2.4, without --html.  This documents version 3.2,
# which has it.
cov-html() {
  local out=${1:-_gcov/coverage.html}
  mkdir -p $(dirname $out)
  gcovr -r . --html --html-details -o $out
  ls -l $PWD/$out
}

install-cov() {
  sudo apt-get install gcovr
}

download-gcovr() {
  wget --directory _tmp \
    https://pypi.python.org/packages/2d/00/464e454fa08329dc15a2c8c6cedde92af27e459f8aa5efdd620d8f3681ac/gcovr-3.2.tar.gz
}

publish-cov() {
  local dest_host=$1  # required
  local dest_dir=${2:-chubot.org/bwk/coverage}

  ssh $dest_host -- mkdir --verbose -p $dest_dir
  rsync --archive --verbose _gcov/ $dest_host:$dest_dir/
}

"$@"
