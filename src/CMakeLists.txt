# Create a library target for all source files
add_library(proc++Lib
    Employee.cpp
    # add other .cpp files here
)

# Add compile options to the target
target_compile_options(proc++Lib PRIVATE
    -Wall
    -Wextra
    -Wconversion
    -Wliteral-conversion
    -Wunreachable-code
    -Wreturn-type
)

# Make headers available to dependents
target_include_directories(proc++Lib
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)
