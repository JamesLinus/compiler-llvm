cmake_minimum_required(VERSION 2.8)
project(5120309607_prj2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CPP_FILE header.h syntax_tree.h syntax_tree.cpp utility.h TreeNode.h TreeNode.cpp)

add_library(cpp ${CPP_FILE})

