#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

// definition for get_sales_tax_amount
double get_sales_tax_amount(double meal_amount){
    const double tax_rate = 0.0675; // 6.75% tax rate
    return tax_rate * meal_amount;
}

// definition for get_tip_amount
double get_tip_amount(double meal_amount, double tip_rate){
    return meal_amount * tip_rate;
}

