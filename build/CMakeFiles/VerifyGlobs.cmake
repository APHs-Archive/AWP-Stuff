# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.24
cmake_policy(SET CMP0009 NEW)

# observerSrc at Observer/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Observer/*.cpp")
set(OLD_GLOB
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Observer/Observer.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/jonas/Documents/GitHub/AWP-Stuff/build/CMakeFiles/cmake.verify_globs")
endif()

# observerSrc at Observer/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Observer/*.h")
set(OLD_GLOB
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Observer/IObserver.h"
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Observer/Observer.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/jonas/Documents/GitHub/AWP-Stuff/build/CMakeFiles/cmake.verify_globs")
endif()

# subjectSrc at Subject/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Subject/*.cpp")
set(OLD_GLOB
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Subject/Subject.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/jonas/Documents/GitHub/AWP-Stuff/build/CMakeFiles/cmake.verify_globs")
endif()

# subjectSrc at Subject/CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Subject/*.h")
set(OLD_GLOB
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Subject/ISubject.h"
  "/Users/jonas/Documents/GitHub/AWP-Stuff/Design-Patterns/Observer/Subject/Subject.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/jonas/Documents/GitHub/AWP-Stuff/build/CMakeFiles/cmake.verify_globs")
endif()