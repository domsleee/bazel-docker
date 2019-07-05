FROM ubuntu:18.04

COPY [ "dummy.cc", "BUILD", "./" ]
ENV VERSION 0.27.1

# TODO: use first method
RUN set -e; \
  apt-get update; \
  apt-get install -y pkg-config zip g++-8 zlib1g-dev unzip python3 curl; \
  curl https://github.com/bazelbuild/bazel/releases/download/${VERSION}/bazel-${VERSION}-installer-linux-x86_64.sh -Lo script.sh; \
  bash script.sh; \
  touch WORKSPACE; \
  bazel build dummy; \
  rm -rf /var/lib/apt/lists/* WORKSPACE BUILD dummy.cc;

WORKDIR /project
