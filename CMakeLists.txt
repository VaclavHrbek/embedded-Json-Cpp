cmake_minimum_required(VERSION 3.17)

project(emebeddedJson)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(apps)