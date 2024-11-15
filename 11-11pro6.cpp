//Create a menu-based program where the user can choose between "Vegetarian" and "Non-Vegetarian" options, then display a sub-menu with specific dishes based on the selection. Use nested switch statements to handle each menu and sub-menu option.

#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;

    // Display the main menu
    cout << "Welcome to the Menu!" << endl;
    cout << "Please choose an option:" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. Non-Vegetarian" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> mainChoice;

    switch (mainChoice) {
        case 1:
            // Vegetarian sub-menu
            cout << "\nVegetarian Menu:" << endl;
            cout << "1. Paneer Tikka" << endl;
            cout << "2. Veg Biryani" << endl;
            cout << "3. Salad" << endl;
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "You have chosen Paneer Tikka." << endl;
                    break;
                case 2:
                    cout << "You have chosen Veg Biryani." << endl;
                    break;
                case 3:
                    cout << "You have chosen Salad." << endl;
                    break;
                default:
                    cout << "Invalid choice in Vegetarian menu." << endl;
                    break;
            }
            break;

        case 2:
            // Non-Vegetarian sub-menu
            cout << "\nNon-Vegetarian Menu:" << endl;
            cout << "1. Chicken Curry" << endl;
            cout << "2. Mutton Biryani" << endl;
            cout << "3. Fish Fry" << endl;
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> subChoice;

            switch (subChoice) {
                case 1:
                    cout << "You have chosen Chicken Curry." << endl;
                    break;
                case 2:
                    cout << "You have chosen Mutton Biryani." << endl;
                    break;
                case 3:
                    cout << "You have chosen Fish Fry." << endl;
                    break;
                default:
                    cout << "Invalid choice in Non-Vegetarian menu." << endl;
                    break;
            }
            break;

        default:
            cout << "Invalid choice in main menu." << endl;
            break;
    }

    return 0;
}
