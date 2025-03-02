//add include statements
#include "repetition.h"
//add function(s) code here
int factorial(int num) {
    int result = 1; // Initialize result to 1

    // Multiply result by numbers from 1 to num
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}

int gcd(int num1, int num2) {
    if (num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num1; // num1 is the GCD
}