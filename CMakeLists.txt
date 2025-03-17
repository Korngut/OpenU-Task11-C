cmake_minimum_required(VERSION 3.28)
project(Project C)

set(CMAKE_C_STANDARD 11)

add_executable(Project main.c
        palindrome.c
        count_zero_bits.c)
