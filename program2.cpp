//Program in C++ to calculate the digits of a number

#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    // Input the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // If the number is 0, it has 1 digit
    if (number == 0) {
        count = 1;
    } else {
        // Count digits by dividing the number by 10 repeatedly
        while (number != 0) {
            number /= 10;
            count++;
        }
    }

    // Display the number of digits
    cout << "Number of digits: " << count << endl;

    return 0;
}
