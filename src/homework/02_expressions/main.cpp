//write include statements
#include <iostream> 
#include "hwexpressions.h" 

//write namespace using statement for cout
using std::cin;
using std::cout;
int main() {
    // Step a: Create double variables
    double meal_amount = 0.0;
    double tip_rate = 0.0;
    double tip_amount = 0.0;
    double tax_amount = 0.0;
    double total = 0.0;

    // Step b: Capture meal amount from the keyboard
    cout << "Enter the meal amount: ";
    cin >> meal_amount;

    // Step c: Calculate sales tax
    tax_amount = get_sales_tax_amount(meal_amount);

    // Step d: Capture tip rate from the keyboard
    cout << "Enter the tip rate (as a decimal, e.g., 0.15 for 15%): ";
    cin >> tip_rate;

    // Step e: Calculate tip amount
    tip_amount = get_tip_amount(meal_amount, tip_rate);

    // Step f: Calculate total
    total = meal_amount + tax_amount + tip_amount;

    // Step g: Display the receipt
    cout << "\nReceipt:\n";
    cout << "Meal Amount:           " << meal_amount << "\n";
    cout << "Sales Tax:             " << tax_amount << "\n";
    cout << "Tip Amount:            " << tip_amount << "\n";
    cout << "Total:                 " << total << "\n";

    return 0;
}