FROM ubuntu:16.04

RUN set -e; \
  apt-get update; \
  apt-get install -y build-essential software-properties-common; \
  add-apt-repository ppa:ubuntu-toolchain-r/test -y; \
  apt-get update; \
  apt-get install -y g++-8 openjdk-8-jdk; \
  echo "deb [arch=amd64] http://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list; \
  curl https://bazel.build/bazel-release.pub.gpg | apt-key add -; \
  apt-get update; \
  apt-get install -y bazel; \
  apt-get clean; \
  rm -rf /var/lib/apt/lists/*;

WORKDIR /project
