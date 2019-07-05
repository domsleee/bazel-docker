FROM ubuntu:18.04

RUN set -e; \
  apt-get update; \
  apt-get install -y g++-8 curl gnupg2; \
  echo "deb [arch=amd64] http://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list; \
  curl https://bazel.build/bazel-release.pub.gpg | apt-key add -; \
  apt-get update; \
  apt-get install -y bazel; \
  apt-get clean; \
  bazel fetch remote_java_tools_linux remote_coverage_tools; \
  rm -rf /var/lib/apt/lists/*;

WORKDIR /project
