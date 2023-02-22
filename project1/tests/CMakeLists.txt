cmake_minimum_required(VERSION 3.14)

add_executable(ExampleTests ExampleTests.cpp)
target_link_libraries(ExampleTests PUBLIC gtest_main Example)

add_test(NAME ExampleTests COMMAND ExampleTests)
