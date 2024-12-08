cmake_minimum_required(VERSION 3.29)
project(belajarheader C)

set(CMAKE_C_STANDARD 23)

add_executable(belajarheader cmake-build-debug/main.c
        cmake-build-debug/hitung_umur.h
        cmake-build-debug/hitung_umur.c)
