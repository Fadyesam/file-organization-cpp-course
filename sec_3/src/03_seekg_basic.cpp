#include <iostream>
#include <fstream>
#include <string>

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

    string line;
    //seek to position 2 in the file
    file.seekg(2);
    cout << "Position after seekg(2) = " << file.tellg() << '\n';
    // Read a line from the file starting from position 2
    getline(file, line);

    cout << "Text from position 2 = " << line << '\n';

    file.close();
    return 0;
}
