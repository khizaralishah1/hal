file(GLOB_RECURSE HEADERS "include/*.h")
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_library(clock_lib ${HEADERS} ${SOURCES})
target_include_directories(clock_lib PUBLIC include)
target_link_libraries(clock_lib PRIVATE interfaces_lib)