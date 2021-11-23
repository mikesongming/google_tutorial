
add_executable(sample1_unittest sample1_unittest.cc)
target_link_libraries(sample1_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} sample1)
# target_include_directories(sample1_unittest PRIVATE ${CMAKE_SOURCE_DIR}/include)

# add_test(sample1_unittest ${EXECUTABLE_OUTPUT_PATH}/sample1_unittest)
add_test(
    NAME sample1_unittest 
    COMMAND sample1_unittest)