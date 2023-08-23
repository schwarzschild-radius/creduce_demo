#! /bin/bash

clang++ hello_not_world.cpp -std=c++20
./a.out &> output.txt
grep -e "Hello " output.txt 
