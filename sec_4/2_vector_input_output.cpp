#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3+2);

    cout << "Insert vector elements:\n";

    // Read 3 values from the user
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    cout << "The vector elements are:\n";

    // Print vector elements
    for (int i = 0; i < 3; i++)
    {
        cout << v[i] << endl;
    }
    
    

    return 0;
}
