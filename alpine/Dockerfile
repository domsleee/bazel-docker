FROM alpine:latest

RUN set -e; \
  apk add --update g++ gdb; \
  apk --no-cache add ca-certificates wget; \
  wget -q -O /etc/apk/keys/david@ostrovsky.org-5a0369d6.rsa.pub https://raw.githubusercontent.com/davido/bazel-alpine-package/master/david@ostrovsky.org-5a0369d6.rsa.pub; \
  wget https://github.com/davido/bazel-alpine-package/releases/download/0.26.1/bazel-0.26.1-r0.apk; \
  apk add bazel-0.26.1-r0.apk; \
  rm -rf /var/cache/apk/*;

WORKDIR /project
