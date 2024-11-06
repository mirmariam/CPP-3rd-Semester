//Program in C++ to check if an alphabet is a vowel or not 

#include <iostream>
using namespace std;

int main() {
    char alphabet;

    // Input the alphabet from the user
    cout << "Enter an alphabet: ";
    cin >> alphabet;

    // Convert to lowercase to handle both uppercase and lowercase inputs
    alphabet = tolower(alphabet);

    // Check if the alphabet is a vowel
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
        cout << alphabet << " is a vowel." << endl;
    } else {
        cout << alphabet << " is not a vowel." << endl;
    }

    return 0;
}
