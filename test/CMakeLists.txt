find_package(Boost COMPONENTS unit_test_framework REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

include_directories("${CMAKE_SOURCE_DIR}/include")

# Get memer source files
file(GLOB MEMER_SOURCE_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")
list(REMOVE_ITEM MEMER_SOURCE_FILES "${CMAKE_SOURCE_DIR}/src/memer.cpp")
message(STATUS "Files to be tested: ${MEMER_SOURCE_FILES}")

# Get test source files, build, and link
file(GLOB TEST_SOURCE_FILES "${CMAKE_SOURCE_DIR}/test/*.cpp")
message(STATUS "Test files: ${TEST_SOURCE_FILES}")
add_executable(MemerTest ${TEST_SOURCE_FILES} ${MEMER_SOURCE_FILES})

SET(COVERAGE OFF CACHE BOOL "Coverage")
if(COVERAGE)
    target_link_libraries(MemerTest ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} --coverage)
    target_compile_options(MemerTest PRIVATE --coverage)
endif()

# Add all Boost tests to CTest
add_definitions(-DBOOST_TEST_DYN_LINK)
foreach(TEST_SOURCE_FILE ${TEST_SOURCE_FILES})
    file(READ "${TEST_SOURCE_FILE}" TEST_SOURCE_FILE_CONTENTS)
    string(REGEX MATCHALL "BOOST_AUTO_TEST_CASE\\( *([A-Za-z_0-9]+) *\\)" 
            FOUND_TESTS ${TEST_SOURCE_FILE_CONTENTS})

     # Register each test
    foreach(HIT ${FOUND_TESTS})
        string(REGEX REPLACE ".*\\( *([A-Za-z_0-9]+) *\\).*" "\\1" TEST_NAME ${HIT})
        add_test(NAME "MemerTest.${TEST_NAME}" 
                 COMMAND MemerTest
                 --run_test=${TEST_NAME})
             
    endforeach()

endforeach()
