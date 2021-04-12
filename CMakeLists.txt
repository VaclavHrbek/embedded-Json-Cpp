cmake_minimum_required(VERSION 3.17)

project(emebeddedJson)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(nlohmann_json 3.2.0 REQUIRED)

add_subdirectory(include)
add_subdirectory(data)
add_subdirectory(src)
add_subdirectory(apps)