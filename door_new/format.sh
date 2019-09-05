#!/bin/bash

clang-format -style=google ./door.h > door.tmp
mv ./door.tmp ./door.h

clang-format -style=google ./door.cpp > door.tmp
mv ./door.tmp ./door.cpp
