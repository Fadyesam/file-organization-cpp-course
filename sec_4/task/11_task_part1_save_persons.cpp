#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int numberOfPersons;

    cout << "How many persons do you want to add? ";
    cin >> numberOfPersons;

    // Open file for writing
    ofstream outFile("persons.txt");

    // Check that the file opened successfully
    if (!outFile)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    string name;
    int age;

    for (int i = 0; i < numberOfPersons; i++)
    {
        cout << "\nPerson " << i + 1 << endl;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        // Save name and age in the file
        outFile << name << " " << age << endl;
    }

    outFile.close();

    cout << "\nData saved successfully." << endl;

    return 0;
}
