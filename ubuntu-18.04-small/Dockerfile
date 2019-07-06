FROM ubuntu:18.04

COPY [ "dummy.cc", "BUILD", "./" ]
ENV VERSION 0.27.1

# TODO: use first method
RUN set -e; \
  apt-get update; \
  apt-get install -y pkg-config zip g++ zlib1g-dev unzip python3 curl; \
  curl https://github.com/bazelbuild/bazel/releases/download/${VERSION}/bazel-${VERSION}-installer-linux-x86_64.sh -Lo script.sh; \
  bash script.sh; \
  touch WORKSPACE; \
  bazel build dummy; \
  apt-get remove --purge -y zip zlib1g-dev unzip python3 curl; \
  apt-get clean; \
  rm -rf /var/lib/apt/lists/* WORKSPACE BUILD dummy.cc script.sh;

WORKDIR /project
