#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("../data/overwrite.txt",
                 ios::in | ios::out | ios::trunc);

    if (!file.is_open())
    {
        cout << "Error opening file\n";
        return 1;
    }

    file << "Hello World";

    cout << "Position after first write = "
         << file.tellp() << '\n';

    file.seekp(6);

    cout << "Position after seekp(6) = "
         << file.tellp() << '\n';

    file << "C++";

    file.close();
    
    //-----------------------------------------
    ifstream input("../data/overwrite.txt");
    string text;
    
    getline(input, text);

    cout << "Final file content = " << text << '\n';

    input.close();
    return 0;
}
