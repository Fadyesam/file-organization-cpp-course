// 04_ate_keep_old_data.cpp
// Shows the REAL power of ios::ate:
// start at the end, but jump anywhere and overwrite without erasing the file.
// Before running: f3.txt must contain "Welcome to the university"
// (run 00_create_sample_files first).
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream f("f3.txt", ios::in | ios::out | ios::ate);

    if (!f.is_open()) {
        cout << "f3.txt does not exist. Create it first!" << endl;
        return 1;
    }

    cout << "Pointer after opening (end of file): " << f.tellp() << endl;

    f.seekp(0, ios::beg);   // jump to the beginning
    f << "GOODBYE";         // overwrite the first 7 characters ("Welcome")

    f.seekg(0, ios::beg);
    string text;
    getline(f, text);
    cout << "File content now: " << text << endl;   // GOODBYE to the university

    f.close();
    return 0;
}
