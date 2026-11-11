// 05_task5_students_records.cpp
// Task 5 (Lab 2): write student records to students.txt
// Record format: Name, ID, Grade, delim   ->   char[20], int, float, char
// Example in file: Mohamed Ali, 33, 2 $
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char  name[20];
    int   id;
    float grade;
};

int main()
{
    // ios::app -> new records are added after the old ones (nothing is erased)
    ofstream file("students.txt", ios::app);
    if (!file.is_open()) {
        cout << "Cannot open file!" << endl;
        return 1;
    }

    Student s;
    char choice;

    do {
        cout << "Enter name: ";
        cin.getline(s.name, 20);

        cout << "Enter ID: ";
        cin >> s.id;

        cout << "Enter grade: ";
        cin >> s.grade;

        // Each record ends with the delimiter '$'
        file << s.name << ", " << s.id << ", " << s.grade << " $";

        cout << "Add another record? (y/n): ";
        cin >> choice;
        cin.ignore(1000, '\n');   // remove the leftover Enter before next getline
    } while (choice == 'y' || choice == 'Y');

    file.close();
    cout << "Records saved in students.txt" << endl;
    return 0;
}
