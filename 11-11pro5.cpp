//Write a program that takes two integers and a character representing an operation (+, -, *, /) as input from the user and uses a switch statement to perform the appropriate arithmetic operation and print the result.n  

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

    // Perform the operation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = static_cast<float>(num1) / num2;  // Cast to float for division
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            break;
    }

    return 0;
}
