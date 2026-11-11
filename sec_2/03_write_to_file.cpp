#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // fstream يستخدم للتعامل مع الملفات.
    fstream file;

    // ios::out = فتح الملف للكتابة.
    // إذا لم يكن الملف موجودًا، يتم إنشاؤه.
    file.open("info.txt", ios::out);

    // كتابة النص داخل الملف.
    file << "Welcome Eng.fady";

    //file<<"welcome "; write  //file>>varibleName; read
    
    // إغلاق الملف بعد الانتهاء.
    file.close();

    return 0;
}
