cmake_minimum_required(VERSION 3.4.1)
project(CodegenExample)

set (CMAKE_VERBOSE_MAKEFILE ON)

add_library(react-native-codegen-example          
            STATIC
            ../cpp/NativeCodegenExampleTurboModule.cpp
)

target_include_directories(react-native-codegen-example
        PUBLIC
        ../cpp
)




find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )




target_link_libraries(react-native-codegen-example
        jsi
        ${log-lib}
        react_codegen_RNCodegenExampleSpec
)