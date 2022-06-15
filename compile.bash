#!/bin/bash

python scripts/compile_proto.py

mkdir build
cd build
cmake ..
make -j4

