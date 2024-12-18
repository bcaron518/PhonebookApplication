#!/bin/bash

# Build the project using CMake
mkdir -p build
cd build
cmake ..
make

echo "Build completed."
