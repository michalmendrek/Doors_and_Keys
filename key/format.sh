#!/bin/bash

clang-format -style=google ./key.h > key.tmp
mv ./key.tmp ./key.h

clang-format -style=google ./key.cpp > key.tmp
mv ./key.tmp ./key.cpp
