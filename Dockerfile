# Use Ubuntu 24.04 (comes with GCC 13 by default)
FROM ubuntu:24.04

# Set working directory
WORKDIR /home/professional_c++

COPY . .

# Install GCC 13, CMake, Python3, Conan, and common build tools
RUN apt update && apt install -y \
    g++ \
    cmake \
    git \
    python3 \
    python3-pip \
    ninja-build \
    build-essential \
    python3-venv\
    && rm -rf /var/lib/apt/lists/*

# Create a virtual environment, activate it and install conan
RUN python3 -m venv .venv && .venv/bin/pip install conan

# Default command when container runs
CMD [ "/bin/bash" ]
