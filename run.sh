#!/bin/bash
#
# Usage:
#   ./run.sh <function name>

set -o nounset
set -o pipefail
set -o errexit

download() {
  mkdir -p _tmp
  wget --directory _tmp 'https://www.cs.princeton.edu/~bwk/btl.mirror/awk.tar.gz'
  wget --directory _tmp 'https://www.cs.princeton.edu/~bwk/btl.mirror/awktest.a'
}

"$@"
