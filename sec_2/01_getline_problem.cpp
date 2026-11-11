// ============================================================
//  مثال 1: الفرق بين cin >> و getline()
//  الهدف: توضيح ان cin بتوقف عند اول مسافة، اما getline بتاخد السطر كامل
// ============================================================
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2;

    // ---------- استخدام cin ----------
    cout << "جرب (1) cin: " << endl;
    cout << "Enter Your Name: ";
    cin >> name1;                 // هياخد اول كلمة بس (لحد اول مسافة)
    cout << "Hello, " << name1 << endl;

    // لازم نمسح الـ buffer قبل ما نستخدم getline بعد cin
    // عشان الـ Enter اللي فضل في الذاكرة ميبوظش القراءة الجاية
    cin.ignore();

    // ---------- استخدام getline ----------
    cout << "\nجرب (2) getline: " << endl;
    cout << "Enter Your Name: ";
    getline(cin, name2);          // هياخد السطر كامل حتى لو فيه مسافات
    cout << "Hello, " << name2 << endl;

    return 0;
}

/*
   ملاحظة للطالب:
   لو دخلت: Ahmed Ali Youssef

   النتيجة مع cin      ==>  Hello, Ahmed
   النتيجة مع getline  ==>  Hello, Ahmed Ali Youssef
*/
