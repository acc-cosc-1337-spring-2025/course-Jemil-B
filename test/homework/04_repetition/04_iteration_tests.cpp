#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#define CATCH_CONFIG_MAIN // Tell Catch2 to provide a main() function
#include "catch.hpp"
#include "../../../src/homework/04_repetition/repetition.h"

// Test Case 1: Test factorial function
TEST_CASE("Test factorial function", "[factorial]") {
    // Table 1: Factorial test cases
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(6) == 720);
}

// Test Case 2: Test gcd function
TEST_CASE("Test gcd function", "[gcd]") {
    REQUIRE(gcd(5, 15) == 5);
    REQUIRE(gcd(21, 28) == 7);
    REQUIRE(gcd(25, 100) == 25);
    
}
