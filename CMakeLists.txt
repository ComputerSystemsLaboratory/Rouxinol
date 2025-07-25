cmake_minimum_required(VERSION 3.10)
#cmake_policy(SET CMP0169 OLD)  

project(gnns4code_native)

set(CMAKE_CXX_STANDARD 14)

find_package(LLVM 10.0.0)

# prefer Clang matching LLVM
find_package(Clang HINTS "${LLVM_CMAKE_DIR}/../clang")

include(FetchContent)  

FetchContent_Declare(  
    googletest  
    GIT_REPOSITORY https://github.com/google/googletest.git  
    GIT_TAG        v1.14.0 
)  
FetchContent_MakeAvailable(googletest)

if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11
        GIT_TAG        v2.13.1
)
FetchContent_GetProperties(pybind11)

if(NOT pybind11_POPULATED)
  FetchContent_Populate(pybind11)
  add_subdirectory(${pybind11_SOURCE_DIR} ${pybind11_BINARY_DIR})
endif()

add_subdirectory(rouxinol/third_party/compy_learn/extractors)
