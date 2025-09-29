#!/bin/bash

# Ask the user for the chapter number
read -p "Enter chapter number: " CHAPTER

# Build the project
chmod +x ./conan_build.sh
./conan_build.sh

# Run the executable
ctest -V --test-dir build/Debug/tests/Chapter$CHAPTER
