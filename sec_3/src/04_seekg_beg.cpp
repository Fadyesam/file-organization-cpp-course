#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("../data/data.txt");

    if (!file.is_open())
    {
        cout << "Error opening file\n";
        return 1;
    }

    file.seekg(3, ios::beg);

    char ch;
    // Read the character at position 3
    file>>ch;
    //file.get(ch);

    cout << "Position 3 contains: " << ch << '\n';

    file.close();
    return 0;
}
