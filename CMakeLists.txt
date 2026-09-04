cmake_minum_required(VERSION 3.20)

project(ChessEngine, LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(chess
    src/io/BoardPrinter.cpp
)

target_include_directories(chess
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

add_executable(bitboard_tests
    tests/bitboard_tests.cpp
)

target_link_libraries(bitboard_tests
    PRIVATE
        chess
)

enable_testing()

add_test(
    NAME bitboard_tests
    COMMAND bitboard_tests
)