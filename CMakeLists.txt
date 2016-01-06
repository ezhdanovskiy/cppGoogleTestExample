project(GoogleTests)
cmake_minimum_required(VERSION 2.6)

enable_testing()

include_directories(include)

add_executable(${BIN_NAME}
        src/operations.cpp
        test/test01.cpp
)
target_link_libraries(${BIN_NAME} gtest gtest_main pthread)

add_subdirectory(src)
add_subdirectory(test)