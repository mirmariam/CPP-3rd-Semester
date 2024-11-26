/* Write a program to find and print all pairs (x, y) such that:
• x^2 + y^2 = n
where n is an input number, and both x and y range from 0 to sqrt(n). Use break and continue statements to optimize the solution. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter a number (n): ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative number." << endl;
        return 1;
    }

    cout << "Pairs (x, y) such that x^2 + y^2 = " << n << ":" << endl;

    int limit = static_cast<int>(sqrt(n)); // Range for x and y
    for (int x = 0; x <= limit; ++x) {
        for (int y = 0; y <= limit; ++y) {
            if (x * x + y * y > n) {
                break; 
            }
            if (x * x + y * y == n) {
                cout << "(" << x << ", " << y << ")" << endl;
            }
        }
    }

    return 0;
}
