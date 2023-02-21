cmake_minimum_required(VERSION 3.19)
project(mine_clearance C)

set(CMAKE_C_STANDARD 99)

add_executable(mine_clearance main.c game.c game.h)