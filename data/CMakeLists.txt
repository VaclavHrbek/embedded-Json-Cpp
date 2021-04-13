add_library(data STATIC data.o)
set_source_files_properties(data.o
                            PROPERTIES
                            EXTERNAL_OBJECT True
                            GENERATED True)

set_target_properties(data
                       PROPERTIES
                       LINKER_LANGUAGE C)


target_include_directories(data PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})