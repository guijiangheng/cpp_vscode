cmake_minimum_required(VERSION 3.0.0)
project(cpp_vscode CXX)

add_executable(cpp_vscode src/main.cpp)
set_property(TARGET cpp_vscode PROPERTY CXX_STANDARD 20)