#include "CornerGrocer.h" // Include the CornerGrocer header file
#include <iostream> // Include the input/output stream library
#include "CornerGrocer.cpp" // Include the CornerGrocer implementation file

using namespace std; // Use the standard namespace

int main() {
    CornerGrocer grocer; // Create an instance of CornerGrocer

    while (true) { // Infinite loop for the menu
        cout << "Menu:" << endl;
        cout << "1. Find the frequency of a specific item" << endl;
        cout << "2. Print the frequency of all items" << endl;
        cout << "3. Print a histogram of all items" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice; // Read user input

        switch (choice) { // Handle menu choices
            case 1:
                grocer.findItemFrequency(); // Find item frequency
                break;
            case 2:
                grocer.printAllItems(); // Print all items
                break;
            case 3:
                grocer.printHistogram(); // Print histogram
                break;
            case 4:
                cout << "Exiting program." << endl; // Exit message
                return 0; // Exit program
            default:
                cout << "Invalid choice. Please try again." << endl; // Invalid choice message
        }
    }
}


