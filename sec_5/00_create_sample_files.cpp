// 00_create_sample_files.cpp
// Creates the files that the slides say you must create first.
// Run this ONCE before running the other examples.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream("file.txt");                         // empty file for example 02
    ofstream("f1.txt") << "Welcome";              // example 03
    ofstream("f2.txt") << "Welcome";              // example 03
    ofstream("f3.txt") << "Welcome to the university"; // example 04

    cout << "Sample files created: file.txt, f1.txt, f2.txt, f3.txt" << endl;
    return 0;
}
