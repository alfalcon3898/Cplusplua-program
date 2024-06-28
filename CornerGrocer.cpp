#include "CornerGrocer.h"
#include <iostream> // Include input/output stream library
#include <fstream> // Include file stream library

using namespace std;

void CornerGrocer::loadItems() {
    ifstream file("CS210_Project_Three_Input_File.txt"); // Open input file
    if (!file) {
        cerr << "Error opening file." << endl; // Error message
        exit(1); // Exit program
    }

    string item;
    while (file >> item) { // Read items from file
        items[item]++; // Count each item
    }
    file.close(); // Close file
}

void CornerGrocer::writeBackupFile() {
    ofstream file("frequency.dat"); // Open backup file
    if (!file) {
        cerr << "Error creating backup file." << endl; // Error message
        exit(1); // Exit program
    }

    for (const auto& pair : items) { // Write items to backup file
        file << pair.first << " " << pair.second << endl;
    }
    file.close(); // Close file
}

CornerGrocer::CornerGrocer() {
    loadItems(); // Load items from file
    writeBackupFile(); // Write items to backup file
}

void CornerGrocer::findItemFrequency() {
    cout << "Enter the item you wish to look for: ";
    string item;
    cin >> item; // Read item from user
    auto it = items.find(item); // Find item in map
    if (it != items.end()) {
        cout << item << " appears " << it->second << " times." << endl; // Print item count
    } else {
        cout << item << " does not appear in the list." << endl; // Item not found
    }
}

void CornerGrocer::printAllItems() {
    for (const auto& pair : items) { // Print all items and counts
        cout << pair.first << " " << pair.second << endl;
    }
}

void CornerGrocer::printHistogram() {
    for (const auto& pair : items) { // Print histogram
        cout << pair.first << " "; 
        for (int i = 0; i < pair.second; ++i) {
            cout << "*"; // Print asterisks
        }
        cout << endl;
    }
}

