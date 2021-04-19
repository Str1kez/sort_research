cmake_minimum_required(VERSION 3.19)
project(sort_research)

set(CMAKE_CXX_STANDARD 20)

add_executable(sort_research base_structure.h merge_sort.h main.cpp quick_sort.h)