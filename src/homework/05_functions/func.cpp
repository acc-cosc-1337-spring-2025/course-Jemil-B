//add include statements
#include "func.h"

//add function code here
// Function to calculate GC content
double get_gc_content(const std::string& dna) {
    int gc_count = 0;
    for (char base : dna) {
        if (base == 'G' || base == 'C') {
            gc_count++;
        }
    }
    return (static_cast<double>(gc_count) / dna.length()) * 100;
}

// Function to reverse a string manually
std::string reverse_string(std::string dna) {
    std::string reversed_dna;
    for (int i = dna.length() - 1; i >= 0; --i) {
        reversed_dna += dna[i];
    }
    return reversed_dna;
}

// Function to get the DNA complement
std::string get_dna_complement(std::string dna) {
    dna = reverse_string(dna); // Reverse the string first
    for (char& base : dna) {
        switch (base) {
            case 'A': base = 'T'; break;
            case 'T': base = 'A'; break;
            case 'C': base = 'G'; break;
            case 'G': base = 'C'; break;
            default: break; // Handle unexpected characters
        }
    }
    return dna;
}