// 06_read_students_records.cpp
// Bonus: read the records written by Task 5.
// getline with the delimiter '$' returns one record at a time.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    
    ifstream in("students.txt");
    if (!in.is_open()) {
        cout << "students.txt not found. Run Task 5 first!" << endl;
        return 1;
    }

    string record;
    int count = 0;
    while (getline(in, record, '$')) {
        if (record.empty()) continue;
        count++;
        cout << "Record " << count << ": " << record << endl;
    }

    in.close();
    return 0;
}
