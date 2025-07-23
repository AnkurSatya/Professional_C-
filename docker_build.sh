# !/bin/bash
CONTAINER_NAME="cpp23_gcc_container"
IMAGE_NAME="cpp23-gcc"

docker rm -f $CONTAINER_NAME 2>/dev/null || true
docker build -t $IMAGE_NAME .
docker run -dit \
    -v ~/.ssh:/root/.ssh:ro \
    --name $CONTAINER_NAME $IMAGE_NAME