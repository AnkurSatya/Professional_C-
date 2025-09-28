cmake_minimum_required(VERSION 3.26)
project(proc++ LANGUAGES CXX)

# --------------------------------
# Compiler Settings
# --------------------------------
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}/generators")

# set(CMAKE_AUTOMOC ON)
# set(CMAKE_AUTOUIC ON)
# set(CMAKE_AUTORCC ON)

# --------------------------------
# Add subdirectories
# --------------------------------
# Add subdirectory for sources
add_subdirectory(src)
add_subdirectory(tests)
