cmake_minimum_required(VERSION 3.24)
project(Vet-program)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vet-program main.cpp Animal.cpp Animal.hpp Dog.cpp Dog.hpp Cat.cpp
        Cat.hpp Cow.cpp Cow.hpp Vet.cpp Vet.hpp Tests.cpp Tests.hpp)
