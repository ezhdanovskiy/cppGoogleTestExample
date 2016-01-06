project(Tests)

add_executable(utest test01.cpp)
target_link_libraries(utest op gtest gtest_main pthread)
