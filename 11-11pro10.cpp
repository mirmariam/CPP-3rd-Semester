//Write a program that takes a single character as input from the user and uses a switch statement to check if the character is a vowel (a, e, i, o, u for both uppercase and lowercase) or a consonant. Print the result accordingly.

#include <iostream>
using namespace std;

int main() {
    char ch;

    // Taking input from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Converting character to lowercase to simplify the comparison
    ch = tolower(ch);

    // Using switch statement to check for vowels
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
            break;
    }

    return 0;
}