#!/bin/bash

# Ask the user for the chapter number
read -p "Enter chapter number: " CHAPTER

# Build the project
chmod +x ./conan_build.sh
./conan_build.sh

# Run the executable
./build/Debug/src/Chapter$CHAPTER/chapter$CHAPTER
