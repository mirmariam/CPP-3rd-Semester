//Write a program that takes an integer from the user representing the month (1 for January, 2 for February, etc.) and uses a switch statement to print the number of days in that month. Consider leap year (assume it is a leap year if February is chosen) and handle it with an additional check.



#include <iostream>
using namespace std;

int main() {
    int month;
    
    // Take month input from the user
    cout << "Enter the month number (1-12): ";
    cin >> month;

    // Determine the number of days in the month
    switch (month) {
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            cout << "31 days" << endl;
            break;

        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            cout << "30 days" << endl;
            break;

        case 2: // February
            // Assuming it is a leap year
            cout << "29 days (leap year)" << endl;
            break;

        default:
            cout << "Invalid month number entered." << endl;
            break;
    }

    return 0;
}
