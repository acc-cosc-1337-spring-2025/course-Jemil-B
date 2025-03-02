#include <iostream>
#include "repetition.h"

using std::cin;
using std::cout;

int main() {
    int choice = 0;
    bool exit_program = false;

    do {
        cout << "1 - Factorial\n";
        cout << "2 - Greatest Common Divisor\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num = 0;
                cout << "Enter a number to calculate its factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is: " << factorial(num) << "\n";
                break;
            }
            case 2: {
                int num1 = 0, num2 = 0;
                cout << "Enter two numbers to calculate their GCD: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << "\n";
                break;
            }
            case 3: {
                char confirm = 'n';
                cout << "Are you sure you want to exit? (y/n): ";
                cin >> confirm;

                if (confirm == 'y' || confirm == 'Y') {
                    exit_program = true;
                    cout << "Exiting the program.\n";
                } else {
                    cout << "Returning to the menu.\n";
                }
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    } while (!exit_program); 

    return 0;
}