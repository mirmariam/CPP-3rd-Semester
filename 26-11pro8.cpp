/* Write a program to print a checkerboard pattern of size n x n: ### #
### #
### #
### #
Use nested loops and an if-else condition to determine whether to print # or a space.
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the checkerboard (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {         // Loop for rows
        for (int j = 0; j < n; ++j) {     // Loop for columns
            if ((i + j) % 2 == 0) {       // Check if the sum of row and column indices is even
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
