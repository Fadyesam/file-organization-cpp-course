#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file("../data/sample.txt",
                 ios::in | ios::out | ios::trunc);

    cout << file.tellp() << '\n';

    file << "This is an apple";

    cout << file.tellp() << '\n';
    //This is an apple
    //123456789     
    file.seekp(9);
    //This is a-sample    
    file << " sam";
        
    cout << file.tellp() << '\n';

    file.close();

    ifstream input("../data/sample.txt");
    string text;
    getline(input, text);

    cout << "Final content = " << text << '\n';

    input.close();
    return 0;
}
