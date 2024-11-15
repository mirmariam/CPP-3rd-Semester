//write a program in C++ that takes an integer input from user and checks if it is positive, negative, or zero using if, else if, and else statements. Print the result accordingly

#include <iostream>
using namespace std;

int main() {
    int num;
    
    // Take integer input from the user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Check if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else if (num < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }
    
    return 0;
}
