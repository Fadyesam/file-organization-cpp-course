#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // فتح fruit.txt للقراءة والكتابة.
    fstream file("fruit.txt", ios::in | ios::out | ios::app);

    // نتحرك إلى نهاية الملف ثم نضيف الرسالة المطلوبة.
    // حسب الـ Task: الملف يحتوي على Apple, Orange, Banana
    // والمطلوب إضافة "Fresh Fruits" في نفس الملف.

    

    file.close();

    return 0;
}
