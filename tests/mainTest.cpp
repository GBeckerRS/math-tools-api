#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "foo/foo.h"

TEST_CASE( "Quick check", "[main]" ) {
    foo ();
    REQUIRE( 1 == 1 );
}

