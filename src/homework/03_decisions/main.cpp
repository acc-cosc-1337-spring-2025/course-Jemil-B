//write include statements
#include <iostream>
#include "decisions.h"

using std::cin;
using std::cout;


int main() 
{
	int choice = 0;
    double grade = 0.0;

    // Display the menu
    cout << "MAIN MENU\n";
    cout << "1 - Letter grade using if\n";
    cout << "2 - Letter grade using switch\n";
    cout << "3 - Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Handle user input
    if (choice == 1 || choice == 2) {
        cout << "Enter the numerical grade: ";
        cin >> grade;
    }

    switch (choice) {
        case 1: {
            // Convert using if-else-if
            std::string letter_grade = convert_to_letter_grade_if(grade);
            cout << "Letter grade (if-else-if): " << letter_grade << "\n";
            break;
        }
        case 2: {
            // Convert using switch
            std::string letter_grade = convert_to_letter_grade_switch(grade);
            cout << "Letter grade (switch): " << letter_grade << "\n";
            break;
        }
        case 3: {
            // Exit the program
            cout << "Exiting the program.\n";
            break;
        }
        default: {
            // Invalid choice
            cout << "Invalid choice. Please run the program again.\n";
            break;
        }
    }
	
	return 0;
}