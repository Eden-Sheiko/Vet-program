cmake_minimum_required(VERSION 3.24)
project(Vet_program)

set(CMAKE_CXX_STANDARD 17)

add_executable(Vet_program main.cpp Animal.cpp Animal.hpp Dog.cpp Dog.hpp Cat.cpp Cat.hpp Cow.cpp Cow.hpp Vet.cpp Vet.hpp Tests.cpp Tests.hpp)
