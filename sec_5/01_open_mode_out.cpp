// 01_open_mode_out.cpp
// Slide: "Open file modes - Example"
// Opens a file for output using ios::out (creates it, erases old content).
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myfile;
    myfile.open("example.txt", ios::out);

    if (!myfile.is_open()) {
        cout << "Cannot open file!" << endl;
        return 1;
    }

    myfile << "Hello from ios::out" << endl;
    myfile.close();

    cout << "example.txt written successfully." << endl;
    return 0;
}
