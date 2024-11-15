//Write a program that takes a user's age as input and uses nested if statements to determine and print whether the person is a child (age < 12), teenager (age between 12 and 18), adult (age between 18 and 60), or senior (age > 60).

#include <iostream>
using namespace std;

int main() {
    int age;

    // Take age input from the user
    cout << "Enter your age: ";
    cin >> age;

    // Check category based on age
    if (age >= 0) {  // Check if age is non-negative
        if (age < 12) {
            cout << "You are a child." << endl;
        } else if (age >= 12 && age < 18) {
            cout << "You are a teenager." << endl;
        } else if (age >= 18 && age <= 60) {
            cout << "You are an adult." << endl;
        } else {
            cout << "You are a senior." << endl;
        }
    } else {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}
