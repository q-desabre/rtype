cmake_minimum_required (VERSION 3.11.2)
PROJECT(RType)
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(rtype_client
  client/src/main.cpp
  client/src/SfmlWindow.cpp)
target_link_libraries(rtype_client ${CONAN_LIBS})
target_include_directories(rtype_client PRIVATE client/include)
