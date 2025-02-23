#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test convert_to_letter_grade_if", "[if-else-if]") {
    REQUIRE(convert_to_letter_grade_if(95) == "A"); 
    REQUIRE(convert_to_letter_grade_if(85) == "B");
    REQUIRE(convert_to_letter_grade_if(75) == "C"); 
    REQUIRE(convert_to_letter_grade_if(65) == "D"); 
    REQUIRE(convert_to_letter_grade_if(50) == "F"); 
}

TEST_CASE("Test convert_to_letter_grade_switch", "[switch]") {
    REQUIRE(convert_to_letter_grade_switch(95) == "A"); 
    REQUIRE(convert_to_letter_grade_switch(85) == "B"); 
    REQUIRE(convert_to_letter_grade_switch(75) == "C"); 
    REQUIRE(convert_to_letter_grade_switch(65) == "D"); 
    REQUIRE(convert_to_letter_grade_switch(50) == "F"); 
}
