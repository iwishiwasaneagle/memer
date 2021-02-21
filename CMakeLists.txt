cmake_minimum_required(VERSION 3.19)

project(
    memer
    VERSION 0.1.0
    )


SET(MAKE_TESTING OFF CACHE BOOL "Make testing")
if(MAKE_TESTING)
    # Enable testing
    enable_testing()

    # Add test dir
    add_subdirectory(test)
    if (CMAKE_CONFIGURATION_TYPES)
        add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} 
            --force-new-ctest-process --output-on-failure -vv
            --build-config "$<CONFIGURATION>")
    else()
        add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} 
            --force-new-ctest-process --output-on-failure -vv)
    endif()
endif()

# Add src
add_subdirectory(src)

# Add include as include dir
include_directories(include)

# Create memer executable
set(MEMER_SOURCE_FILES src/memer.cpp src/upper_lower.cpp src/superscript.cpp src/w_i_d_e.cpp)
add_executable(memer ${MEMER_SOURCE_FILES})

install(TARGETS memer DESTINATION bin)
