#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"
#include <cassert> // For assertions

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}



TEST_CASE("Test Get Sales Tax", "[get_sales_tax_amount]") {
    REQUIRE(get_sales_tax_amount(10) == Approx(0.675));
    REQUIRE(get_sales_tax_amount(20) == Approx(1.35));
}

TEST_CASE("Test Get Tip Amount", "[get_tip_amount]") {
    REQUIRE(get_tip_amount(20, 0.15) == Approx(3));
    REQUIRE(get_tip_amount(20, 0.20) == Approx(4));
}
