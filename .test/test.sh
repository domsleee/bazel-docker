#!/usr/bin/env bash
set -e;
bazel build //assignments/wl:main;
bazel build //assignments/wl:word_ladder_test;
echo OK
