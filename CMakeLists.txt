cmake_minimum_required(VERSION 3.10.0)

project(TROLL VERSION 4.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
MESSAGE(STATUS "CXX compiler ${CMAKE_CXX_COMPILER}")

# --- Build target ---
# Find GSL package
find_package(GSL REQUIRED)
if(NOT ${GSL_FOUND})
    MESSAGE(FATAL_ERROR "The GSL library was not found")
endif()
MESSAGE(STATUS "GSL found")
MESSAGE(STATUS "   - version ${GSL_VERSION}")
MESSAGE(STATUS "   - included files located in ${GSL_INCLUDE_DIRS}")

add_executable(${PROJECT_NAME} src/troll.cpp)

target_compile_options(${PROJECT_NAME} PRIVATE -O3 -Wall)
target_link_libraries(${PROJECT_NAME} PRIVATE GSL::gsl GSL::gslcblas)

# Add the LUT generator executable
add_executable(generate_lut_header src/generate-lut-header.cpp)

# Include the 'include' directory for the generator
target_include_directories(generate_lut_header PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add a custom lut target to generate lut.hpp in the include directory
add_custom_target(lut
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_CURRENT_SOURCE_DIR}/include
    COMMAND generate_lut_header
    BYPRODUCTS ${CMAKE_CURRENT_SOURCE_DIR}/include/lut.hpp
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include
    DEPENDS generate_lut_header
    COMMENT "Generating LUT header (include/lut.hpp)..."
)

# Make the main TROLL target depend on the lut target
add_dependencies(${PROJECT_NAME} lut)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include  # Public headers
)

# sanity check
add_custom_target(sanity
    COMMAND ${CMAKE_SOURCE_DIR}/sanity/check.sh
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/sanity
    COMMENT "Running sanity check (bit-by-bit comparison)"
)

# Make 'test' depend on 'sanity' (and any other tests in the future)
add_custom_target(test DEPENDS sanity)


