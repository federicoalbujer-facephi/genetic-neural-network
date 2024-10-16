cmake_minimum_required(VERSION 3.0.0)
project(genetic-neural-network VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

include_directories(include)

set(SOURCES
    src/main.cpp
    src/neural_network/Neuron.cpp
)

add_executable(genetic-neural-network ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
