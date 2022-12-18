cmake_minimum_required(VERSION 3.10)

#set clang as compiler
set(CMAKE_C_COMPILER "C:/Program Files/LLVM/bin/clang.exe")
set(CMAKE_CXX_COMPILER "C:/Program Files/LLVM/bin/clang.exe")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -stdlib=libc++")

project(pattern_observer)

#set c++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Observer)
target_include_directories(${PROJECT_NAME} PUBLIC Observer)
target_link_directories(${PROJECT_NAME} PRIVATE Observer)
target_link_libraries(${PROJECT_NAME} Observer)

add_subdirectory(Subject)
target_include_directories(${PROJECT_NAME} PUBLIC Subject)
target_link_directories(${PROJECT_NAME} PRIVATE Subject)
target_link_libraries(${PROJECT_NAME} Subject)
