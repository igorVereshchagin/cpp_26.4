cmake_minimum_required(VERSION 3.20)
project(2)

set(CMAKE_CXX_STANDARD 14)

add_executable(2 main.cpp phone.h contact.h phone_number.h phone_number.cpp phone.cpp contact.cpp)
