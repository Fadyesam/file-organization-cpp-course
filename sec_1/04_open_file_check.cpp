// ============================================================
//  مثال 4: فتح ملف والتأكد انه اتفتح صح
//  الهدف: توضيح خطوة "Opening a file" و is_open()
// ============================================================
#include <iostream>
#include <fstream>   // لازم نعمل include للمكتبة دي عشان نتعامل مع الملفات
using namespace std;

int main()
{
    ofstream myfile;          // تعريف كائن (object) من كلاس ofstream
                               // ofstream = الكلاس المستخدم للكتابة في الملفات

    myfile.open("file.txt");  // فتح (او انشاء) ملف اسمه file.txt

    // is_open() بترجع true لو الملف اتفتح صح
    if (!myfile.is_open())
    {
        cout << "Error, file is not opened" << endl;
    }
    else
    {
        cout << "File opened successfully" << endl;
    }

    myfile.close();   // مهم جدًا: قفل الملف بعد ما نخلص منه

    return 0;
}

/*
   ملاحظة للطالب:
   - لو الملف مش موجود اصلاً، ofstream هينشئه تلقائيًا.
   - الطريقة المختصرة لفتح ملف في سطر واحد:
        ofstream myfile("file.txt");
   - دايمًا اعمل تحقق (is_open) قبل ما تكتب او تقرأ من اي ملف.
*/
