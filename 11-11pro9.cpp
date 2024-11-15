//Write a program that takes an integer as input and uses a for loop with an if statement to check if the number is prime. If it's prime, print "Prime Number"; otherwise, print "Not a Prime Number."

#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    // Taking input from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Check for edge case when the number is less than 2
    if (num <= 1) {
        isPrime = false;
    } else {
        // Loop through numbers from 2 to sqrt(num) to check divisibility
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break; // No need to check further if a divisor is found
            }
        }
    }

    // Output the result
    if (isPrime) {
        cout << "Prime Number" << endl;
    } else {
        cout << "Not a Prime Number" << endl;
    }

    return 0;
}