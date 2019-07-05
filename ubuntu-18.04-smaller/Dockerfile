FROM ubuntu:18.04

COPY [ "dummy.cc", "BUILD", "./" ]
ENV VERSION 0.27.1

# TODO: use first method
RUN set -e; \
  apt-get update; \
  sudo apt-get install -y pkg-config zip g++ zlib1g-dev unzip python3 curl; \
  curl https://github.com/bazelbuild/bazel/releases/download/0.27.1/bazel-0.27.1-installer-linux-x86_64.sh -o script.sh; \
  bash script.sh; \
  touch WORKSPACE; \
  bazel build dummy; \
  rm -rf /var/lib/apt/lists/* WORKSPACE BUILD dummy.cc;

WORKDIR /project
