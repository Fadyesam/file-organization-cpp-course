// 03_app_vs_ate.cpp
// Slide: "Difference between app and ate open file modes"
// Before running: f1.txt and f2.txt must contain "Welcome"
// (run 00_create_sample_files first).
//
// f1 (app): Welcome Students
// f2 (ate): " Students"  -> see note below
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("f1.txt", ios::app);
    ofstream file2("f2.txt", ios::ate);

    // Change the pointer to the beginning of the file
    file.seekp(0, ios::beg);    // ignored: app always writes at the end
    file2.seekp(0, ios::beg);   // works: ate lets us move the pointer

    file  << " Students";
    file2 << " Students";

    file.close();
    file2.close();

    // NOTE: ofstream adds ios::out automatically, and ios::out alone
    // (without ios::in or ios::app) also truncates the old content.
    // So "Welcome" disappears from f2.txt. To keep old data with ate,
    // add ios::in (see 04_ate_keep_old_data.cpp).
    cout << "Done. Open f1.txt and f2.txt to see the difference." << endl;
    return 0;
}
