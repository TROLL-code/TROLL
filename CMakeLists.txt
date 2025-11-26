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
MESSAGE(STATUS "CXX compiler ${CMAKE_CXX_COMPILER}")

add_executable(${PROJECT_NAME} src/troll.cpp)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include  # Public headers
)

target_compile_options(${PROJECT_NAME} PRIVATE -O3 -Wall)
target_link_libraries(${PROJECT_NAME} PRIVATE GSL::gsl GSL::gslcblas)

# --- Linting targets ---
# Find cpplint and cppcheck
find_program(CPPLINT_PATH cpplint)
find_program(CPPCHECK_PATH cppcheck)

# cpplint target
if(CPPLINT_PATH)
    add_custom_target(lint-style
        COMMAND ${CPPLINT_PATH} ./include/*.hpp ./src/*.cpp
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Running cpplint for code style checks"
    )
else()
    message(WARNING "cpplint not found, lint-style target will not be available")
endif()

# cppcheck target
if(CPPCHECK_PATH)
    add_custom_target(lint-static
        COMMAND ${CPPCHECK_PATH}
        ARGS --enable=all --inconclusive --std=c++17 --suppress=missingIncludeSystem src/
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Running cppcheck for static analysis"
    )
else()
    message(WARNING "cppcheck not found, lint-static target will not be available")
endif()

# Combined lint target
add_custom_target(lint
    DEPENDS lint-style lint-static
    COMMENT "Running all linting tools (style + static analysis)"
)
