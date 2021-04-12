project(lib)


add_library(lib lib.cpp)

target_link_libraries(lib PRIVATE nlohmann_json::nlohmann_json)

target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})