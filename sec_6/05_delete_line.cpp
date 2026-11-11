// 05 - Delete a line from a file by line number
// Same idea as the previous program, but using getline() and a line counter.
// Data file: file.txt (Ahmed Mohamed / Rana Youssef / Ibrahim Ali)
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>                // remove() and rename()
using namespace std;

int main() {
    ifstream x("data/file.txt");      // file to read from
    ofstream temp("data/t.txt");      // temporary file to write to

    int line, c_line = 1;        // c_line = current line number
    cout << "Enter line number you want to delete: ";
    cin >> line;

    string text;
    while (getline(x, text)) {   // read one full line at a time
        if (c_line != line)      // copy every line except the chosen one
            temp << text << endl;
        c_line++;                // move to the next line number
    }

    x.close();
    temp.close();

    remove("data/file.txt");          // delete the old file
    rename("data/t.txt", "data/file.txt"); // temp file becomes the new file

    cout << "Line " << line << " deleted successfully." << endl;
    return 0;
}
