add_executable(hauling_tests
  test_main.cpp
  test_version.cpp
)
target_link_libraries(hauling_tests PRIVATE hauling_core doctest::doctest)
add_test(NAME unit_tests COMMAND hauling_tests)