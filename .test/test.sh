#!/usr/bin/env bash
set -e;
bazel build //test:test;
echo OK
