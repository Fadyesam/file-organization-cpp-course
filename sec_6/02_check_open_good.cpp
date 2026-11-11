// 02 - Check if a file opened successfully using good()
// good() returns true if the stream is ready to use (no error flags set).
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in;
    in.open("out.txt");          // try to open the file

    if (in.good())               // true -> stream is ready
        cout << "Open";
    else
        cout << "Unable to open the file";

    in.close();
    return 0;
}
// Output: "Open" if out.txt exists, otherwise "Unable to open the file".
