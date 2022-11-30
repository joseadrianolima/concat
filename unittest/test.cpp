#include <catch2/catch_test_macros.hpp>
#include "../concat"

TEST_CASE( "Check parameters blablabla, cde 8", "concat" ) {
    REQUIRE( "yes > blablabcde" == concatRemove(string s, string t, int k) );
}


TEST_CASE( "Check parameters cda, cda 7", "concat" ) {
    REQUIRE( "yes > cda" == concatRemove(string s, string t, int k) );
}