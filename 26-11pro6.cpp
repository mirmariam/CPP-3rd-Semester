/* Write a program that repeatedly asks the user to input a positive integer and then reverses the digits of the number. For example, input 1234 should output 4321. Stop the program when the user enters 0. */

#include <iostream>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10); 
        num = num / 10; 
    }
    return reversed;
}

int main() {
    int number;

    do {
        cout << "Enter a positive integer (or 0 to stop): ";
        cin >> number;

        if (number < 0) {
            cout << "Invalid input! Please enter a positive integer." << endl;
            continue; // Ask for input again
        }

        if (number == 0) {
            cout << "Program terminated." << endl;
            break;
        }

        cout << "Reversed number: " << reverseNumber(number) << endl;

    } while (true);

    return 0;
}
