add_library(data OBJECT data.o)

target_include_directories(data PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})