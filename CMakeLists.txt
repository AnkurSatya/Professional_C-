cmake_minimum_required(VERSION 3.15)
project(proc++ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Explicitly disable modules support if causing issues
add_compile_options(-fno-modules)

list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}/generators")

# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTORCC ON)

# Add subdirectory for sources
add_subdirectory(src)