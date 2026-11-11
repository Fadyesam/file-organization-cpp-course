#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    // ios::out  = فتح الملف للكتابة.
    // ios::trunc = حذف المحتوى القديم للملف عند فتحه للكتابة.
    file.open("info.txt", ios::out | ios::trunc);

    // كتابة محتوى جديد داخل الملف.
    file << "Students";

    file.close();

    return 0;
}
