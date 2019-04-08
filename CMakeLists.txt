# cmake_minimum_required(VERSION <specify CMake version here>)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp class_example/book.h class_example/book.cpp str/str.cpp str/str.h vect/Vect.cpp vect/Vect.h input/input.cpp input/input.h iter/iter.cpp iter/iter.h Search/binary_search.cpp ary/ary.cpp ary/ary.h operator/operator.cpp operator/operator.h control_structure/control.cpp control_structure/control.h exception/exception.cpp exception/exception.h function/function.cpp function/function.h class_example/book_derived.h class_example/book_derived.cpp)