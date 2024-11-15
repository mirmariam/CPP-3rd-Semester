/*Write a program that takes a student's score (out of 100) as input and displays the grade based on the following criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Use if-else statements for this.*/

#include <iostream>
using namespace std;

int main() {
    int score;

    // Take score input from the user
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    // Determine the grade based on the score
    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    } else if (score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score entered. Please enter a score between 0 and 100." << endl;
    }

    return 0;
}
