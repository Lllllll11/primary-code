cmake_minimum_required(VERSION 3.19)
project(static C)

set(CMAKE_C_STANDARD 99)

add_executable(static main.c add.c)