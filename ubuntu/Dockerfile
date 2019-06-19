FROM ubuntu:18.04

RUN set -e; \
  apt-get update; \
  apt-get install -y g++-8 gdb;

RUN set -e; \
  apt-get update; \
  apt-get install -y pkg-config zip g++ zlib1g-dev unzip python3 curl; \
  curl -L https://github.com/bazelbuild/bazel/releases/download/0.27.0/bazel-0.27.0-installer-linux-x86_64.sh -o bazel-setup.sh; \
  chmod +x bazel-setup.sh; \
  ./bazel-setup.sh;


