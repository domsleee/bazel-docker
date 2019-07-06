docker run --rm -v $(pwd):/project --cap-add=SYS_PTRACE --security-opt seccomp=unconfined -it domslee/bazel bash
