cmake_minimum_required (VERSION 3.22.1)

project (Binfw)

add_executable(binfw binfw.cc)

target_compile_options(binfw PRIVATE
    -O3
)