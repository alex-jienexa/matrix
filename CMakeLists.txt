cmake_minimum_required(VERSION 3.1)

project(Main VERSION 1.0)

configure_file(MatrixConfigure.h.in MatrixConfigure.h)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(Main main.cpp)
add_subdirectory(include)

target_link_libraries(Main PUBLIC include)
target_include_directories(Main PUBLIC 
                            "${PROJECT_BINARY_DIR}" 
                            "${PROJECT_SOURCE_SIR}/include"
                            )

install(TARGETS Main DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/MatrixConfigure.h" DESTINATION include)