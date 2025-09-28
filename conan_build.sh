#!/bin/bash

# Setting compiler version to use for this project instead of setting globally.
export CC=/opt/homebrew/opt/llvm/bin/clang
export CXX=/opt/homebrew/opt/llvm/bin/clang++

# Setting up the project and installing dependencies
conan install . --build=missing --profile:host=apple-silicon.profile  -s build_type=Debug

# Generating and configuring the build system
cmake -Bbuild/Debug -S. \
-DCMAKE_C_COMPILER=$CC \
-DCMAKE_CXX_COMPILER=$CXX \
-DCMAKE_TOOLCHAIN_FILE=build/Debug/generators/conan_toolchain.cmake \
-DCMAKE_BUILD_TYPE=Debug \
-DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# Compiling the project
cmake --build ./build/Debug --config Debug
