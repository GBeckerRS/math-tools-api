# Create mai target
add_executable (${PROJECT_NAME}
    main.cpp)

# Link libraries with main target
target_link_libraries(${PROJECT_NAME} PRIVATE ${LIBS})

