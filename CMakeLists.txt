cmake_minimum_required(VERSION 3.20)
project(unfix_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")

add_executable(demo src/main.cpp)
add_executable(demo_tests tests/test_demo.cpp)

enable_testing()
add_test(NAME demo_tests COMMAND demo_tests)
