#!/bin/bash

if [ $# -eq 0 ]; then
  echo "Problem not specified!" 
  exit 127 
fi

g++ -std=c++11 -O2 -Wall -Wextra "problem$1.cpp"
./a.out
rm a.out
