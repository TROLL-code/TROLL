cmake_minimum_required(VERSION 3.10.0)

project(TROLL VERSION 4.1.0 LANGUAGES C CXX)

# Find GSL package
find_package(GSL REQUIRED)
if(NOT ${GSL_FOUND})
    MESSAGE(FATAL_ERROR "The GSL library was not found")
endif()
MESSAGE(STATUS "GSL found")
MESSAGE(STATUS "   - version ${GSL_VERSION}")
MESSAGE(STATUS "   - included files located in ${GSL_INCLUDE_DIRS}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TROLL mainTROLL4.0.cpp)

target_compile_options(TROLL PRIVATE -O3 -Wall)
target_link_libraries(TROLL PRIVATE GSL::gsl GSL::gslcblas)
