cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        pointers/pointers.h
        arithmetics/arithmetics.h
        arithmetics/arithmetics_tasks_0-10.cpp
        pointers/pointers_tasks.cpp
        arithmetics/arithmetics_tasks_10-20.cpp)
