#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("../data/data.txt", ios::binary);

    if (!file.is_open())
    {
        cout << "Error opening file\n";
        return 1;
    }
    // Move the read position to the end of the file
    file.seekg(0, ios::end);

    cout << "File size = " << file.tellg() << " bytes\n";

    file.close();
    return 0;
}
