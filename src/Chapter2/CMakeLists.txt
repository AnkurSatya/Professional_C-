# Create a library target for all source files
#add_library(chapter1Lib
#    Employee.cpp
#    Database.cpp
#)

# Make headers available to dependents
#target_include_directories(chapter1Lib
#    PUBLIC ${CMAKE_SOURCE_DIR}/include/Chapter1
#)

# Create the executable target from main.cpp
add_executable(chapter2 main.cpp)

# Link header files
target_include_directories(chapter2
    PRIVATE ${CMAKE_SOURCE_DIR}/include/Chapter2
)

# Link the executable with the library
#target_link_libraries(chapter1 PRIVATE chapter1Lib)


# Link the compile flags to both targets, the library and the standalone executable
#target_link_libraries(chapter1Lib PRIVATE project_compiler_flags)
target_link_libraries(chapter2 PRIVATE project_compiler_flags)
