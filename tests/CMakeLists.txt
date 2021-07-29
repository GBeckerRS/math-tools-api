# Testing library
include(FetchContent)
FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v2.9.1
    )
FetchContent_MakeAvailable(catch2)

# Tests need to be added as executables first
add_executable(${TESTAPP} mainTest.cpp)

# Link the Catch2 testing library
target_link_libraries(${TESTAPP} PRIVATE ${LIBS} Catch2::Catch2)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
# ???
add_test(NAME testlibtest COMMAND testlib) # Command can be a target

