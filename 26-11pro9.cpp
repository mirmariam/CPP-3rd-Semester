/* 
Create a menu-driven program that allows the user to perform the following operations repeatedly:
1. Find the factorial of a number.
2. Find the GCD of two numbers.
3. Find the LCM of two numbers. */

#include <iostream>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate GCD 
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM 
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0; // LCM of 0 with any number is 0
    return (a / gcd(a, b)) * b;
}

int main() {
    int choice;

    do {
        // Display menu
        cout << "\nMenu:\n";
        cout << "1. Find the factorial of a number\n";
        cout << "2. Find the GCD of two numbers\n";
        cout << "3. Find the LCM of two numbers\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int num1, num2;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            }
            case 3: {
                int num1, num2;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "LCM of " << num1 << " and " << num2 << " is " << lcm(num1, num2) << endl;
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
