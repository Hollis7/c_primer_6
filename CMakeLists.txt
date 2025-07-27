cmake_minimum_required(VERSION 3.10)
project(c_primer_6 C)

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 调试模式下的编译选项
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g -O0)  # -g 生成调试信息，-O0 禁用优化
endif()

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含头文件目录
include_directories(include)

# 添加可执行文件
add_executable(hello src/ch1/hello.c)
add_executable(ex1 src/ch1/ex1.c)

# 如果你有库文件需要链接，可以这样添加
# target_link_libraries(hello mylib)