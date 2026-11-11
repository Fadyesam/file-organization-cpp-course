// ============================================================
//  مثال 1: الفرق بين cin >> و getline()
//  الهدف: توضيح ان cin بتوقف عند اول مسافة، اما getline بتاخد السطر كامل
// ============================================================
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    // ---------- استخدام getline , cin ----------
    cout << "Enter Your Name: ";
    cin>>name;
    cout<<"Hello, "<<name<<endl;
    getline(cin, name);          // هياخد السطر كامل حتى لو فيه مسافات
    cout << "Hello, " << name << endl;

    return 0;
}

/*
   ملاحظة للطالب:
   لو دخلت: Ahmed Ali Youssef
   النتيجة مع getline  ==>  Hello, Ahmed Ali Youssef
*/
