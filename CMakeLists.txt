project(leetcode)

set(CMAKE_VERBOSE_MAKEFILE on)

#build vmovq_n_u8 with and without neon instructtion, like: movi v0.16b, #0x3
add_compile_options(-Wall -march=armv8-a)

add_executable(vmovq_n_u8_have_neon.out vmovq_n_u8.c)
add_executable(vmovq_n_u8_no_neon.out vmovq_n_u8.c)

target_compile_options(vmovq_n_u8_have_neon.out PRIVATE -O3)
target_compile_options(vmovq_n_u8_no_neon.out PRIVATE -O0)

add_executable(arm_neon_add.out arm_neon_add.c)
cmake_minimum_required(VERSION 2.8.0)
