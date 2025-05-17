cmake_minimum_required(VERSION 3.16)

project(TestCodeComplete LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

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

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/angelscript")

set(ANGEL_PARSER
    angelscript/angelscriptVisitor.h
    angelscript/angelscriptBaseVisitor.cpp
    angelscript/angelscriptBaseVisitor.h
    angelscript/angelscriptLexer.cpp
    angelscript/angelscriptLexer.h
    angelscript/angelscriptParser.cpp
    angelscript/angelscriptParser.h
    angelscript/angelscriptVisitor.cpp)

set(ANTLR4_C3_SRC ${ANGEL_PARSER})

add_executable(TestCodeComplete ${ANTLR4_C3_SRC} main.cpp)

target_link_libraries(TestCodeComplete PRIVATE Qt${QT_VERSION_MAJOR}::Core
                                               antlr4_static)
