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

add_executable(${PROJECT_NAME}
    ../src/species.cpp
    ../src/crown.cpp
    ../src/tree.cpp
    ../src/look_up_tables.cpp
    ../src/input.cpp
    ../src/memory.cpp
    ../src/output.cpp
    ../src/simulation.cpp
    ../src/internal/look_up_tables_cache.cpp
    ../src/internal/param_registry.cpp
    troll.cpp
    )

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ../inst/include  # Public headers
    ../src # Private headers
)

target_compile_options(${PROJECT_NAME} PRIVATE -O3 -Wall)
target_link_libraries(${PROJECT_NAME} PRIVATE GSL::gsl GSL::gslcblas)

# sanity check
add_custom_target(sanity
    COMMAND ${CMAKE_SOURCE_DIR}/sanity/check.sh
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/sanity
    COMMENT "Running sanity check (bit-by-bit comparison)"
)

