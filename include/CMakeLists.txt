add_library(include STATIC constructors.cpp output.cpp Matrix.h)
target_include_directories(include PUBLIC ./)