cmake_minimum_required(VERSION 3.16)

project(git_training_c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GLOB STUDENT_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/students/*.c"
)

add_executable(git_training_basic
    src/main.c
    src/training_core.c
    ${STUDENT_SOURCES}
)

target_include_directories(git_training_basic PRIVATE
    include
)

if (CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(git_training_basic PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()

option(ENABLE_SUBREPO_BONUS "Build submodule bonus target" ON)

if (ENABLE_SUBREPO_BONUS AND EXISTS "${CMAKE_SOURCE_DIR}/third_party/tinycalc/CMakeLists.txt")
    add_subdirectory(third_party/tinycalc)

    add_executable(git_training_bonus
        src/bonus_main.c
    )

    target_link_libraries(git_training_bonus PRIVATE
        tinycalc
    )

    target_include_directories(git_training_bonus PRIVATE
        include
    )
else()
    message(WARNING "third_party/tinycalc is not initialized. Bonus target is disabled.")
endif()
