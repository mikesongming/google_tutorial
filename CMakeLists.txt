cmake_minimum_required(VERSION 3.0.0)
project(gflags_demo VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

# include(CTest)
# enable_testing()

find_package(gflags REQUIRED)

add_executable(gflags_demo gflags_demo.cpp)

if(gflags_FOUND)
    message(STATUS "gflags_INCLUDE_DIR: " ${gflags_INCLUDE_DIR})
    message(STATUS "gflags_LIBRARIES: " ${gflags_LIBRARIES})
    include_directories($gflags_INCLUDE_DIR)
    target_link_libraries(gflags_demo ${gflags_LIBRARIES})
endif(gflags_FOUND)


# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
