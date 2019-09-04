#!/bin/bash

cd key
./build.sh
cd ..
cd door
./build.sh
cd ..



g++ --std=c++11 ./key/key.o ./door/door.o ./main.cpp -o main -I ./key -I ./door
