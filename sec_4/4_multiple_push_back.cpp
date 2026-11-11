#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3, 2);

    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout << "The vector elements are:\n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
