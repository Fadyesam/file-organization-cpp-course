#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("../data/students.txt",
                 ios::in | ios::out | ios::trunc);

    // Put pointer: writing
    cout << "Initial put position = " << file.tellp() << '\n';

    file << "Ahmed Mohamed";

    cout << "Put position after writing = "
         << file.tellp() << '\n';

    // Get pointer: reading
    file.seekg(0);

    cout << "Get position after seekg(0) = "
         << file.tellg() << '\n';

    string name;
    getline(file, name);

    cout << "Name = " << name << '\n';

    cout << "Get position after reading = "
         << file.tellg() << '\n';

    file.close();
    return 0;
}
