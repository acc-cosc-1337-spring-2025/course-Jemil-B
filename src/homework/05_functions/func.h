#ifndef func_h
#define func_h

#include <string>

// Function to calculate GC content
double get_gc_content(const std::string& dna);

// Function to reverse a string manually
std::string reverse_string(std::string dna);

// Function to get the DNA complement
std::string get_dna_complement(std::string dna);

#endif // func_h