file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(hw_comm_lib ${HEADERS} ${SOURCES})
target_include_directories(hw_comm_lib PUBLIC include)
target_link_libraries(hw_comm_lib PUBLIC sw_comm_lib) # Plus hardware-specific lib

add_subdirectory(demo)