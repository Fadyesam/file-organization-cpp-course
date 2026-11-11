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

    cout << "Current read position = " << file.tellg() << '\n';

    file.close();
    return 0;
}
