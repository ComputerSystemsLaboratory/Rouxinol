cmake_minimum_required(VERSION 3.29)

project(milepost-static-features)

find_package(LLVM 10.0.0 REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS})
link_directories(${LLVM_LIBRARY_DIRS})
add_definitions(${LLVM_DEFINITIONS})

message(STATUS "Found LLVM version: ${LLVM_PACKAGE_VERSION}")
message(STATUS "Found LLVM definitions: ${LLVM_DEFINITIONS}")
message(STATUS "Found LLVM includes: ${LLVM_INCLUDE_DIRS}")
message(STATUS "Found LLVM libraries: ${LLVM_LIBRARY_DIRS}")
message(STATUS "Found LLVM targets: ${LLVM_TARGETS_TO_BUILD}")

set(CMAKE_CXX_STANDARD 14 CACHE STRING "")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fdiagnostics-color=always")

if(NOT LLVM_ENABLE_RTTI)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")
endif()

include(CheckCXXCompilerFlag)
check_cxx_compiler_flag("-fvisibility-inlines-hidden"
  SUPPORTS_FVISIBILITY_INLINES_HIDDEN_FLAG)

if (${SUPPORTS_FVISIBILITY_INLINES_HIDDEN_FLAG} EQUAL "1")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility-inlines-hidden")
endif()

#set(PROJECT_LIBRARY_DIR "/usr/local")
set(PROJECT_LIBRARY_DIR ".")

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_LIBRARY_DIR}/lib")


set(CMAKE_CXX_STANDARD 14 CACHE STRING "")

if(NOT LLVM_ENABLE_RTTI)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")
endif()

add_library(MilepostStaticFeatures SHARED Extractor.cpp Pass.cpp)

