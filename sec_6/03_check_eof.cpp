// 03 - Check for the end of a file using eof()
// Data file: f.txt must contain the single word: Welcome
// (save it WITHOUT a trailing newline so eof() is reached after one read).
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile;
    string s;
    infile.open("data/f.txt");

    infile >> s;                 // read one word; hits the end of the file

    if (infile.eof()) {          // true -> reading reached the end of the file
        cout << "You reach the end of file.\n";
        cout << s;
    } else {
        cout << "You didn't reach the end of file.\n";
    }

    infile.close();
    return 0;
}
// Output:
//   You reach the end of file.
//   Welcome
