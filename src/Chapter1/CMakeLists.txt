# Create a library target for all source files
add_library(chapter1Lib
    Employee.cpp
    Database.cpp
    # add other .cpp files here
)

# Make headers available to dependents
target_include_directories(chapter1Lib
    PUBLIC ${CMAKE_SOURCE_DIR}/include
)

# Create the executable target from main.cpp
add_executable(chapter1 main.cpp)

# Link the executable with the library
target_link_libraries(chapter1 PRIVATE chapter1Lib)


# --------------------------------
# Create an INTERFACE target for shared compiler flags
add_library(project_compiler_flags INTERFACE)

# Add shared compile options
target_compile_options(project_compiler_flags INTERFACE
    -Wall
    -Wextra
    -Wconversion
    -Wliteral-conversion
    -Wunreachable-code
    -Wreturn-type
)

# Link the compile flags to both targets, the library and the standalone executable
target_link_libraries(chapter1Lib PRIVATE project_compiler_flags)
target_link_libraries(chapter1 PRIVATE project_compiler_flags)
