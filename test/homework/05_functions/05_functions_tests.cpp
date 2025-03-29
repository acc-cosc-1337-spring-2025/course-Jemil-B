#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get_gc_content", "[gc_content]") {
    REQUIRE(get_gc_content("AGCTATAG") == Approx(37.5)); // 3 out of 8 bases are G or C (37.5%)
    REQUIRE(get_gc_content("CGCTATAG") == Approx(50.0)); // 4 out of 8 bases are G or C (50.0%)
}

// Test cases for reverse_string
TEST_CASE("Test reverse_string", "[reverse_string]") {
    REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
    REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}

// Test cases for get_dna_complement
TEST_CASE("Test get_dna_complement", "[dna_complement]") {
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
