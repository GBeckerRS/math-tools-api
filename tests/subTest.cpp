#include <catch2/catch.hpp>

#include "Sub.h"

TEST_CASE("Subtract two positive terms", "[sub]")
{
    // Arrange
    Sub sub(1, 1);
    
    // Act
    float res = sub.calculate();
    
    // Assert
    REQUIRE(res == 0);
}

TEST_CASE("Subtract one positive term and one", "[sub]")
{
    // Arrange
    Sub sub(1, -1);
    
    // Act
    float res = sub.calculate();
    
    // Assert
    REQUIRE(res == 2);
}

TEST_CASE("Subtract of two negative terms", "[sub]")
{
    // Arrange
    Sub sub(-1, -1);
    
    // Act
    float res = sub.calculate();
    
    // Assert
    REQUIRE(res == 0);
}

