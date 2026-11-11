#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    // إزالة حرف Enter المتبقي بعد cin قبل استخدام getline.
    cin.ignore(1000, '\n');

    cout << "Enter Your Name: \n";
    getline(cin, name,'#');

    cout << "------------------ \n";
    cout << "Age: " << age << endl;
    cout << "Name : " << name;

    return 0;
}

