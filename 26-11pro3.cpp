//Create a simple calculator using a switch statement. The program should ask the user to input two numbers and a choice of operation (+, -, *, /, %). Implement each operation in a separate function and call the appropriate function based on the user's input.

#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int modulo(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0; 
    }
    return a % b;
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /, %): ";
    cin >> operation;

    // Perform the operation using switch
    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        case '%':
            // For modulo, convert inputs to integers
            cout << "Result: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
