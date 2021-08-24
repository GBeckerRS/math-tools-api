#include <catch2/catch.hpp>

#include "Sum.h"

TEST_CASE( "Sum two positive terms", "[sum]" )
{
    // Arrange
    Sum sum(1, 1);

    // Act
    float res = sum.calculate();

    // Assert
    REQUIRE(res == 2);
}

TEST_CASE("Sum one positive term and one negative")
{
    // Arrange
    Sum sum(1, -1);

    // Act
    float res = sum.calculate();

    // Assert
    REQUIRE(res == 0.0);
}

TEST_CASE("Sum of two negative terms")
{
    // Arrange
    Sum sum(-1, -1);

    // Act
    float res = sum.calculate();

    // Assert
    REQUIRE(res == -2);
}

