
add_executable(sample1_unittest sample1_unittest.cc)
target_link_libraries(sample1_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} sample1)
# target_include_directories(sample1_unittest PRIVATE ${CMAKE_SOURCE_DIR}/include)

# add_test(sample1_unittest ${EXECUTABLE_OUTPUT_PATH}/sample1_unittest)
add_test(NAME sample1_unittest COMMAND sample1_unittest)


add_executable(sample2_unittest sample2_unittest.cc)
target_link_libraries(sample2_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} sample2)
add_test(NAME sample2_unittest COMMAND sample2_unittest)

add_executable(sample3_unittest sample3_unittest.cc)
target_link_libraries(sample3_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
add_test(NAME sample3_unittest COMMAND sample3_unittest)

add_executable(sample4_unittest sample4_unittest.cc)
target_link_libraries(sample4_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} sample4)
add_test(NAME sample4_unittest COMMAND sample4_unittest)

add_executable(sample5_unittest sample5_unittest.cc)
target_link_libraries(sample5_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} sample1)
add_test(NAME sample5_unittest COMMAND sample5_unittest)

add_executable(sample6_unittest sample6_unittest.cc)
target_link_libraries(sample6_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
add_test(NAME sample6_unittest COMMAND sample6_unittest)

add_executable(sample7_unittest sample7_unittest.cc)
target_link_libraries(sample7_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
add_test(NAME sample7_unittest COMMAND sample7_unittest)

add_executable(sample8_unittest sample8_unittest.cc)
target_link_libraries(sample8_unittest ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})
add_test(NAME sample8_unittest COMMAND sample8_unittest)
