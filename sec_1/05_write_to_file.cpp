// ============================================================
//  مثال 5: الكتابة داخل ملف
//  الهدف: توضيح ان الكتابة في الملف زي الكتابة على الشاشة بالظبط
//         بس بنستخدم اسم كائن الملف بدل cout
// ============================================================
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("file.txt");

    if (!myfile.is_open())
    {
        cout << "Error, file is not opened" << endl;
        return 0;   // نوقف البرنامج لو الملف مفتحش
    }

    // الكتابة في الملف بنفس شكل الكتابة على الشاشة (cout <<)
    myfile << "Hello World" << endl;
    myfile << "This is written inside the file." << endl;

    cout << "File opened and data written successfully" << endl;

    myfile.close();   // قفل الملف بعد الانتهاء من الكتابة

    return 0;
}

/*
   ملاحظة للطالب:
   - بعد تشغيل البرنامج، هتلاقي ملف اسمه file.txt جنب البرنامج
     وجواه السطرين اللي كتبناهم.
   - لو فتحت myfile.open("file.txt") تاني بدون اي وضع اضافي،
     الملف بيتمسح ويتكتب من الاول (overwrite) مش يتضاف عليه.
*/
