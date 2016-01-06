project(Tests)
cmake_minimum_required(VERSION 2.6)

set(BIN_NAME utest)
add_executable(${BIN_NAME} test01.cpp)
target_link_libraries(${BIN_NAME} gtest gtest_main)
