cmake_minimum_required(VERSION 3.10)
project(c_primer_6 C)

# 设置C标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 调试模式下的编译选项
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g -O0) # -g 生成调试信息，-O0 禁用优化
endif()

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 包含头文件目录
include_directories(include)

# 查找src/chx目录下的所有.c文件
file(GLOB CH1_SOURCES "src/ch1/*.c")
file(GLOB CH2_SOURCES "src/ch2/*.c")
file(GLOB CH3_SOURCES "src/ch3/*.c")
file(GLOB CH4_SOURCES "src/ch4/*.c")


# 为每个源文件创建可执行文件
foreach(source ${CH1_SOURCES})
    get_filename_component(executable ${source} NAME_WE)
    add_executable(${executable} ${source})
endforeach()

foreach(source ${CH2_SOURCES})
    get_filename_component(executable ${source} NAME_WE)
    add_executable(${executable} ${source})
endforeach()

foreach(source ${CH3_SOURCES})
    get_filename_component(executable ${source} NAME_WE)
    add_executable(${executable} ${source})
endforeach()

foreach(source ${CH4_SOURCES})
    get_filename_component(executable ${source} NAME_WE)
    add_executable(${executable} ${source})
endforeach()
# 如果你有库文件需要链接，可以这样添加
# target_link_libraries(hello mylib)