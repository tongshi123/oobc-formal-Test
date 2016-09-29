[![Build Status](https://travis-ci.org/jing-q-xu/cpp_dev_skeleton.svg?branch=master)](https://travis-ci.org/jing-q-xu/cpp_dev_skeleton/builds)
[![Coverage Status](https://coveralls.io/repos/github/jing-q-xu/cpp_dev_skeleton/badge.svg)](https://coveralls.io/github/jing-q-xu/cpp_dev_skeleton)
[![License](https://img.shields.io/badge/license-%20BSD--3-blue.svg)](../master/LICENSE)


code_for_ut_training
==========

C/C++ unit test demo using [Google Test](https://code.google.com/p/googletest) deployed to
[Travis-CI](https://travis-ci.org/jing-q-xu/code_for_ut_training/builds) with test coverage
deployed to [Coveralls](https://coveralls.io/r/jing-q-xu/code_for_ut_training).

- [Build and test history](https://travis-ci.org/jing-q-xu/code_for_ut_training/builds)
- [Code coverage](https://coveralls.io/r/jing-q-xu/code_for_ut_training)
- Licensed under [BSD-3](../master/LICENSE)


## How to build this demo

```
git clone --recursive https://github.com/jing-q-xu/code_for_ut_training.git
cd code_for_ut_training
mkdir build
cd build
cmake ..
make -j
cd ..
./run_test
```
