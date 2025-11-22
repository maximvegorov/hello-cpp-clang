cmake_minimum_required(VERSION 4.1)
project(hello-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-stdlib=libc++)
add_link_options(-stdlib=libc++)

add_executable(${PROJECT_NAME} src/main.cpp)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall
        -Wextra
        -Wpedantic
        -Werror
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(${PROJECT_NAME} PRIVATE
        /W4
        /WX
    )
endif()

target_sources(${PROJECT_NAME}
    PRIVATE
        FILE_SET cxx_modules TYPE CXX_MODULES FILES
            src/app.ixx)
