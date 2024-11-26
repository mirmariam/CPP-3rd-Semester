/* Write a program that calculates income tax based on the following slab:
• Income <= ₹2,50,000: No tax
• ₹2,50,001 - ₹5,00,000: 5%
• ₹5,00,001 - ₹10,00,000: 20%
• Above ₹10,00,000: 30%
The program should accept an annual income as input and output the tax amount. */

#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0;

    cout << "Enter your annual income (in ₹): ";
    if (!(cin >> income) || income < 0) { // Check whether input is valid
        cout << "Invalid input. Please enter a valid positive income amount." << endl;
        return 1;
    }

    // Calculate tax 
    if (income > 1000000) {
        tax += (income - 1000000) * 0.30; 
        income = 1000000;
    }
    if (income > 500000) {
        tax += (income - 500000) * 0.20; 
        income = 500000;
    }
    if (income > 250000) {
        tax += (income - 250000) * 0.05; 
    }

    // Output the calculated tax
    cout << "Your income tax is: ₹" << tax << endl;

    return 0;
}

