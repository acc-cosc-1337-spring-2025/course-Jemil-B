#include <iostream>
#include "func.h" // Include the header file

int main() {
    int choice = 0;
    std::string dna;

    do {
        // Display the menu
        std::cout << "\nMAIN MENU\n";
        std::cout << "1 - Get GC Content\n";
        std::cout << "2 - Get DNA Complement\n";
        std::cout << "3 - Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1 || choice == 2) {
            std::cout << "Enter a DNA string: ";
            std::cin >> dna;
        }

        switch (choice) {
            case 1: {
                // Get GC Content
                double gc_content = get_gc_content(dna);
                std::cout << "GC Content: " << gc_content << "%\n";
                break;
            }
            case 2: {
                // Get DNA Complement
                std::string complement = get_dna_complement(dna);
                std::cout << "DNA Complement: " << complement << "\n";
                break;
            }
            case 3: {
                // Exit
                std::cout << "Exiting the program.\n";
                break;
            }
            default: {
                // Invalid choice
                std::cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (choice != 3);

    return 0;
}