project(Google_Tests)

add_executable(GoogleTestExample
        GtestExample_test.cpp
)

target_link_libraries(GoogleTestExample gtest gmock gtest_main)