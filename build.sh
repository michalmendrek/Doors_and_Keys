#!/bin/bash

cd key
./build.sh
cd ..
cd door_new
./build.sh
cd ..



g++ --std=c++11 ./key/key.o ./door_new/door.o ./main.cpp -o main -I ./key -I ./door_new
