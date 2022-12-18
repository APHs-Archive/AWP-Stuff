cmake_minimum_required(VERSION 3.10)

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
