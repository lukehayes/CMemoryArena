cmake_minimum_required(VERSION 3.30)
project(MemArena)

# -----------------------------------------------------------------------------
# Variables
#
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_FLAGS -ggdb)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(INCLUDE_DIRS "include")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(BIN_NAME "BinMemArena")
set(LIB_NAME "MemArena")

# -----------------------------------------------------------------------------
# Set the project include directories.
#
include_directories(${INCLUDE_DIRS})

add_executable(${BIN_NAME} main.c)

add_library(${LIB_NAME} STATIC "${SRC_DIR}/Arena.c")

# -----------------------------------------------------------------------------
# Link in the libraies the binary needs.
#
target_link_libraries(${BIN_NAME} ${LIB_NAME})
