cmake_minimum_required(VERSION 3.10)

project(ideation)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

add_subdirectory(sw)
add_subdirectory(hw)