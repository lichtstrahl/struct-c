cmake_minimum_required(VERSION 3.13)
project(tree C)

set(CMAKE_C_STANDARD 99)

add_executable(tree main.c debug.h list/list.h list/list.c command/command.h list/node.h)