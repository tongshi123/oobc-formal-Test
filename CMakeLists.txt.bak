cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(code_for_ut_training)

enable_language(C CXX)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0") # debug, no optimisation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage") # enabling coverage

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    )

set(GOOGLETEST_ROOT external/googletest/googletest CACHE STRING "Google Test source root")

include_directories(
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/include
    )

set(GOOGLETEST_SOURCES
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest-all.cc
    ${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest_main.cc
    )

foreach(_source ${GOOGLETEST_SOURCES})
    set_source_files_properties(${_source} PROPERTIES GENERATED 1)
endforeach()

add_library(googletest ${GOOGLETEST_SOURCES})

add_executable(
    test_local_warehouse
    src/local_warehouse.cpp
    test/test_local_warehouse.cpp
    )

add_executable(
    test_order
    src/local_warehouse.cpp
    src/order.cpp
    test/test_order.cpp
    )
    
set(UT_DIR ${PROJECT_SOURCE_DIR}/test/)
file(GLOB unit_tests test/*.cpp)
foreach(test_file_name ${unit_tests} ) 
    # I used a simple string replace, to cut off .cpp. 
    string(REPLACE ".cpp" "" file_name ${test_file_name})
    string(REPLACE ${UT_DIR} "" test_name ${file_name})

	add_dependencies(${test_name} googletest)
	target_link_libraries(
	    ${test_name}
	    googletest
	    pthread
	    )
	add_test(unit ${PROJECT_BINARY_DIR}/${test_name})
endforeach( test_file_name ${unit_tests} )


include(CTest)
enable_testing()
