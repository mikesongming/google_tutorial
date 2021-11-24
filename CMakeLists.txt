cmake_minimum_required(VERSION 3.0.0)
project(gflags_demo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include(CTest)
enable_testing()

find_package(gflags REQUIRED)

add_executable(gflags_demo gflags_demo.cpp)

if(gflags_FOUND)
    message(STATUS "gflags_INCLUDE_DIR: " ${gflags_INCLUDE_DIR})
    message(STATUS "gflags_LIBRARIES: " ${gflags_LIBRARIES})
    include_directories(${gflags_INCLUDE_DIR})
    target_link_libraries(gflags_demo ${gflags_LIBRARIES})
endif(gflags_FOUND)

add_executable(gtest_demo gtest_demo.cpp)

find_package(GTest REQUIRED)
if(GTest_FOUND)
    message(${GTEST_LIBRARIES})
    message(${GTEST_MAIN_LIBRARIES})
    include_directories(${GTEST_INCLUDE_DIR})
    target_link_libraries(gtest_demo ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
endif(GTest_FOUND)

find_package(GLOG REQUIRED)
if(GLOG_FOUND)
    message(" " ${GLOG_DIR})
    add_executable(glog_demo glog_demo.cpp)
    target_link_libraries(glog_demo glog::glog)
endif(GLOG_FOUND)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(src)

# CTest related
add_test(
    NAME gtest_demo
    COMMAND gtest_demo
)

option(BUILD_TESTS "Build unittests in tests/" ON)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif(BUILD_TESTS)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
