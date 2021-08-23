cmake_minimum_required(VERSION 3.20)
project(sortAlogram)

set(CMAKE_CXX_STANDARD 98)

add_executable(sortAlogram main.cpp sortA/bubble.cpp sortA/sort.h sortA/selection.cpp sortA/insertion.cpp sortA/shell.cpp sortA/quick.cpp)
