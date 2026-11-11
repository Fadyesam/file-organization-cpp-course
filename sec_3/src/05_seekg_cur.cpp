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

    cout << "Initial position = " << file.tellg() << '\n';

    file.seekg(3, ios::cur); //current position + 3 bytes

    cout << "Position after moving 3 bytes from current = "
         << file.tellg() << '\n';

    char ch;
    file.get(ch);

    cout << "Character = " << ch << '\n';

    file.close();
    return 0;
}
