file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(sw_comm_lib ${HEADERS} ${SOURCES})
target_include_directories(sw_comm_lib PUBLIC include)