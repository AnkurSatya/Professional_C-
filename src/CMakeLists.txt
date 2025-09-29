add_subdirectory(Chapter1)
add_subdirectory(Chapter2)


# -----Common compiler flags for all sub-directories------
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
