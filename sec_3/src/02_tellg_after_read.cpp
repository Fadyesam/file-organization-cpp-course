#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("../data/data.txt");

    char ch;

    cout << "Before reading: " << file.tellg() << '\n';
    // Read a character from the file
    file>>ch;
    //file.get(ch);

    cout << "Character read: " << ch << '\n';
    cout << "After reading: " << file.tellg() << '\n';

    file.close();
    return 0;
}
