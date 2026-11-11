#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, y, z;

    // فتح file.txt للقراءة.
    ifstream in("file.txt");

    // قراءة الأرقام من الملف.
    in >> x >> y >> z;

    // إغلاق ملف الإدخال.
    in.close();

    // فتح/إنشاء out.txt للكتابة.
    ofstream out("out.txt");

    // كتابة مجموع الأرقام داخل out.txt.
    out << "Sum = " << x + y + z;

    // إغلاق ملف الإخراج.
    out.close();

    return 0;
}
