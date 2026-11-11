#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //tellp() put - write - seekp()
    ofstream file("../data/myfile.txt", ios::out);

    if (!file.is_open())
    {
        cout << "Error opening file\n";
        return 1;
    }

    cout << "Initial put position = " << file.tellp() << '\n';

    file << "Welcome everyone";

    cout << "Put position after writing = "
         << file.tellp() << '\n';

    file.close();
    return 0;
}
