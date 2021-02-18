cmake_minimum_required(VERSION 3.19)

project(
    memer
    VERSION 0.1.0
    )

# Add src
add_subdirectory(src)

# Add include as include dir
include_directories(include)

# Create memer executable
add_executable(memer src/memer.cpp src/upper_lower.cpp src/superscript.cpp src/w_i_d_e.cpp)

install(TARGETS memer DESTINATION bin)
