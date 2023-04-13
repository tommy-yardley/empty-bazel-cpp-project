# Empty C++ Project built using Bazel
Includes various things pre-configured such as linting via pre-commit, gazelle and clang-format.

This build targets C++20.

## Requirements
The bazel package in this repo is managed by Bazelisk.

Instructions for Ubuntu (with AMD):
```bash
# Install bazelisk and add to path masquerading as bazel
wget https://github.com/bazelbuild/bazelisk/releases/download/v1.16.0/bazelisk-linux-amd64
chmod +x bazelisk-linux-amd64
sudo mv bazelisk-linux-amd64 /usr/local/bin/bazel
```
Other versions have not been tested.

* bazel 5.4.0
* go 1.18.1
* g++ 11.2.0
* pre-commit 2.20.0
