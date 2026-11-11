#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, y, z;

    // ifstream = فتح ملف للقراءة.
    // الملف file.txt يجب أن يحتوي على 3 أرقام.
    ifstream file("file.txt");

    // قراءة الأرقام الثلاثة من الملف.
    file >> x >> y >> z;

    // إغلاق الملف بعد الانتهاء من القراءة.
    file.close();

    cout << "First number = " << x << endl;
    cout << "Second number = " << y << endl;
    cout << "Third number = " << z << endl;

    // حساب مجموع الأرقام الثلاثة.
    cout << "Sum = " << x + y + z;

    return 0;
}
