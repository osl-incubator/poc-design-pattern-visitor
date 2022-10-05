#!/usr/bin/env bash

PROJECT_PATH="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && cd ../.. && pwd )"
PROJECT_CPP_PATH="${PROJECT_PATH}/cpp"

set -ex

clang-tidy \
    --config-file="${PROJECT_PATH}/.clang-tidy" \
    --header-filter="${CONDA_PREFIX}/include" \
    --extra-arg="-I${PROJECT_CPP_PATH}/src" \
    -p ${PROJECT_CPP_PATH}/build \
    ${PROJECT_CPP_PATH}/src/*.cpp \
    ${PROJECT_CPP_PATH}/src/*.h
