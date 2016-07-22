#!/bin/bash
#
# Set up environment for building and testing.
#
# Usage:
#   . env.sh 

export CLANG_DIR=~/install/clang+llvm-3.8.0-x86_64-linux-gnu-ubuntu-14.04

# These are needed to show line numbers in stack traces.
readonly sym=$CLANG_DIR/bin/llvm-symbolizer

export ASAN_SYMBOLIZER_PATH=$sym
export MSAN_SYMBOLIZER_PATH=$sym
export UBSAN_SYMBOLIZER_PATH=$sym
