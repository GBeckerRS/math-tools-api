# Define source files alias
set (SOURCES 
    Sum.cpp
    Sub.cpp)

# Create a target for a library
add_library (${PROJECT_NAME}Core ${SOURCES})
#target_include_directories(${PROJECT_NAME}Core PUBLIC ../include)
target_include_directories(${PROJECT_NAME}Core PUBLIC .)

