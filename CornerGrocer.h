#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <map>
#include <string>

class CornerGrocer {
private:
    std::map<std::string, int> items;

    // Function to load the items and their frequencies from the file
    void loadItems();

    // Function to write the items and their frequencies to the backup file
    void writeBackupFile();

public:
    CornerGrocer();

    // Function to find the frequency of a specific item
    void findItemFrequency();

    // Function to print all items and their frequencies
    void printAllItems();

    // Function to print a histogram of all items
    void printHistogram();
};

#endif // CORNERGROCER_H


