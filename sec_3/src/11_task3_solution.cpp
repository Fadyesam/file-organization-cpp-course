#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

using namespace std;

int main()
{
    const string filename = "../data/welcome.txt";

    // Create/open the file for both reading and writing.
    fstream file(filename,
                 ios::in | ios::out | ios::trunc);

    if (!file.is_open())
    {
        cout << "Error opening file\n";
        return 1;
    }

    // Step 1: write the original sentence.
    file << "Hello Everybody";

    cout << "Position after writing = "
         << file.tellp() << '\n';

    // "body" begins at byte position 11.
    file.seekp(11);

    cout << "Position after seekp(11) = "
         << file.tellp() << '\n';

    // Replace the first 3 characters of "body" with "one".
    file << "one";

    file.close();

    /*
        Important:
        seekp() overwrites existing bytes; it does not delete bytes.
        "body" has 4 characters, while "one" has 3.
        Therefore the old final 'y' must be removed.
    */
    std::filesystem::resize_file(filename, 14);

    ifstream input(filename);

    string finalText;
    getline(input, finalText);

    cout << "Final result = " << finalText << '\n';

    input.close();
    return 0;
}
