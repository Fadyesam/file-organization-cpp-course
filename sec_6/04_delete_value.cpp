// 04 - Delete a value from a file
// A text file can't be edited in the middle, so we:
//   1) copy every value except the one to delete into a temporary file,
//   2) delete the original file,
//   3) rename the temporary file to the original name.
// Data file: original.txt (one number per line: 10 20 30 40 50)
#include <iostream>
#include <fstream>
#include <cstdio>                // remove() and rename()
using namespace std;

int main() {
    ifstream org("data/original.txt");   // file to read from
    ofstream temp("data/temp.txt");      // temporary file to write to

    int x = 40;                     // the value we want to delete
    int num;

    while (org >> num) {            // read until the end of the file
        if (num != x)               // keep everything except x
            temp << num << endl;
    }

    org.close();                    // close both files before remove/rename
    temp.close();

    remove("data/original.txt");         // delete the old file
    rename("data/temp.txt", "data/original.txt"); // temp file becomes the new original
    return 0;
}
// Result: original.txt now contains 10 20 30 50
