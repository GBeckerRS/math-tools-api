#include <catch2/catch.hpp>

#include "myMath.h"

TEST_CASE( "Sum two terms -> 1 + 1", "[sum]" ) {
    REQUIRE(sum(1, 1) == 2);
}

