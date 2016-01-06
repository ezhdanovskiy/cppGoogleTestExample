project(Tests)

set(test01_src test01.cpp)
add_executable(test01 ${test01_src})
target_link_libraries(test01 op gtest gtest_main pthread)

add_test(NAME Test01 COMMAND test01)