#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*
        Educational example:
        Suppose every record occupies exactly 100 bytes.
        The starting byte of record N is:

        (N - 1) * recordSize
    */

    int recordNumber = 4;
    int recordSize = 100;

    streamoff position =
        static_cast<streamoff>((recordNumber - 1) * recordSize);

    cout << "Record " << recordNumber
         << " starts at byte position "
         << position << '\n';

    // Example only:
    // ifstream file("records.dat", ios::binary);
    // file.seekg(position, ios::beg);

    return 0;
}
