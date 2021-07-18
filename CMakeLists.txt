cmake_minimum_required(VERSION 3.15)
project(HashTable C)

set(CMAKE_C_STANDARD 99)

add_executable(HashTable main.c operations.c operations.h ht.c ht.h)