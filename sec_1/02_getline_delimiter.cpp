// ============================================================
//  مثال 2: getline() مع Delimiter (حرف التوقف)
//  الهدف: توضيح ان getline ممكن توقف عند حرف معين مش بس عند Enter
// ============================================================
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << "Enter Your Name: ";

    // الصيغة: getline(is, str, delim)
    // delim هنا هي الحرف '%'
    // يعني القراءة هتوقف اول ما تلاقي % حتى لو الكلام مكملش لسطر جديد
    getline(cin, name, '%');

    cout << "Hello, " << name << endl;

    return 0;
}

/*
   ملاحظة للطالب:
   لو دخلت: Ahmed Ali Youssef % Mohamed

   النتيجة: Hello, Ahmed Ali Youssef
   (وقفت القراءة عند علامة % ومتاخدتش كلمة Mohamed)

   جرب تغيير الـ delimiter لحرف تاني زي '.' أو '#' وشوف الفرق
*/
