file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(comm_lib ${HEADERS} ${SOURCES})
target_include_directories(comm_lib PUBLIC include)
target_link_libraries(comm_lib PRIVATE interfaces_lib)