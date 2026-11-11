// 02_read_write_same_file.cpp
// Slide: "Use a file to read from or write on"
// Expected output:
// 0
// 16
// 0
// With best wishes
// NOTE: file.txt must exist first (run 00_create_sample_files first).
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open a file that you can read from or write on
    string text;
    fstream x("file.txt",ios::in|ios::out);

    if (!x.is_open()) {
        cout << "file.txt does not exist. Create it first!" << endl;
        return 1;
    }

    cout << x.tellg() << endl;   // 0  (pointer at the beginning)
    x.seekp(5);
    x << "With best wishes";

    cout << x.tellg() << endl;   // 16 (we wrote 16 characters)
    x.seekg(9, ios::beg);
    cout << x.tellg() << endl;   // 5  (back to the beginning)

    getline(x, text);
    cout << text << endl;        // With best wishes

    x.close();
    return 0;
}
