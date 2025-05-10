cmake_minimum_required(VERSION 3.16)

project(TestCodeComplete LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    string(APPEND CMAKE_CXX_FLAGS " /utf-8")
    string(APPEND CMAKE_C_FLAGS " /utf-8")
endif()

add_definitions(-DCODE_PATH="${CMAKE_CURRENT_SOURCE_DIR}")

set(DISABLE_WARNINGS ON)
set(ANTLR4_INSTALL OFF)
set(ANTLR_BUILD_CPP_TESTS OFF)
set(ANTLR_BUILD_SHARED OFF)
set(ANTLR_BUILD_STATIC ON)
set(WITH_STATIC_CRT OFF)
add_subdirectory(antlr4)

set(ANTLR4_C3_SRC antlr4-c3/CodeCompletionCore.cpp
                  antlr4-c3/CodeCompletionCore.hpp)

add_executable(TestCodeComplete ${ANTLR4_C3_SRC} main.cpp)

target_link_libraries(TestCodeComplete PRIVATE antlr4_static)
