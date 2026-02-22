cmake_minimum_required(VERSION 3.10)

project(figures)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)



add_executable(main
    Form.cpp main.cpp
)
