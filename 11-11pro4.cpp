//Write a program that takes a number between 1 and 7 from the user and uses a switch statement to print the corresponding day of the week (1 for Monday, 2 for Tuesday, etc.). Print "Invalid input" if the number is not between 1 and 7.

#include <iostream>
using namespace std;

int main() {
    int day;

    // Take input from the user
    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    cin >> day;

    // Determine the day of the week
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;               
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
