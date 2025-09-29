# Get all .cpp files in tests
file(GLOB TEST_SOURCES "*.cpp")

set(TEST_OUTPUT_DIR ${CMAKE_BINARY_DIR}/tests)

foreach(test_src ${TEST_SOURCES})
    # Extract the filename without extension
    get_filename_component(test_name ${test_src} NAME_WE)

    # Create an executable per test file
    add_executable(${test_name} ${test_src})

    # Link to the main library
    target_link_libraries(${test_name} PRIVATE chapter1Lib)

    # Put executable in known folder
    set_target_properties(${test_name} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY ${TEST_OUTPUT_DIR}
    )

    # Add to CTest
    add_test(NAME ${test_name}
        COMMAND ${TEST_OUTPUT_DIR}/${test_name})
endforeach()

# Enable testing
enable_testing()
