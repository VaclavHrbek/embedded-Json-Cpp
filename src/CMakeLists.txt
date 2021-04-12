find_package(nlohmann_json 3.2.0 REQUIRED)

add_library(lib lib.cpp)

target_link_libraries(lib PRIVATE nlohmann_json::nlohmann_json)