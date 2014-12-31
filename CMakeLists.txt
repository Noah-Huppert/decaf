cmake_minimum_required(VERSION 2.8.4)
project(decaf)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

AUX_SOURCE_DIRECTORY(src SOURCE_FILES)
add_executable(decaf ${SOURCE_FILES})