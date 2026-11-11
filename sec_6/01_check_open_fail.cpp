// 01 - Check if a file opened successfully using fail()
// fail() returns true if the file could not be opened (e.g. it doesn't exist).
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in;                 // input file stream (reads from a file)
    in.open("out.txt");          // try to open the file

    if (in.fail())               // true -> opening failed
        cout << "Unable to open the file";
    else
        cout << "Open";

    in.close();                  
    return 0;
}
// Output: "Open" if out.txt exists, otherwise "Unable to open the file".
