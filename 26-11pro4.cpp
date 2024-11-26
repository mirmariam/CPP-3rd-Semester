/* Write a program that generates the following pyramid pattern for a given number of rows n: 
      1 
     1 2 
    1 2 3
   1 2 3 4
  1 2 3 4 5
Use nested loops and appropriate spacing for alignment. */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        //space
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        
        //numbers
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
