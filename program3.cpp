//Program in C++ to reverse a number

#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Reverse the number
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Display the reversed number
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
