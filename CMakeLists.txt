# Versão mínima necessária
cmake_minimum_required (VERSION 3.11)

project (CMakePadrao)

# Alias para os targets de teste e lib
set (TESTAPP ${PROJECT_NAME}Test)
set (LIBS ${PROJECT_NAME}Core)

# Diretório de saída para criação do executável
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# Add main file subdirectory
add_subdirectory (app)

# Add souce files subdirectory
add_subdirectory (source)

# Add test files subdirectory
add_subdirectory (tests)

