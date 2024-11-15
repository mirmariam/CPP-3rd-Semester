//Create a program that takes two integer inputs and an arithmetic operator (+, -, *, /) from the user, then performs the corresponding operation. Use if, else if, and else statements to handle each case and print the result.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    float result;

    // Take two integers and an operator as input
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Perform the chosen operation
    if (op == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } else if (op == '-') {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    } else if (op == '*') {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    } else if (op == '/') {
        // Check for division by zero
        if (num2 != 0) {
            result = static_cast<float>(num1) / num2;  // Cast to float for division
            cout << "Result: " << result << endl;
        } else {
            cout << "Error: Division by zero is undefined." << endl;
        }
    } else {
        cout << "Error: Invalid operator entered." << endl;
    }

    return 0;
}
