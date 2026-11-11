// ============================================================
// Example 1: برنامج بيعدّ الأرقام (Digits) والحروف (Alphabets) والمسافات (Spaces)
// ============================================================
#include <iostream>   
#include <fstream>    
#include <cctype>
using namespace std;

int main()
{
    ifstream input("info.txt");
    int a = 0, s = 0, d = 0;
    char ch; // المتغير اللي هيشيل الحرف اللي بنقراه كل مرة
    // get(ch) بتقرا حرف واحد في كل لفة (وبتقرا المسافات كمان)
    while (input.get(ch))
    {
        if (ch == ' ')            // لو الحرف مسافة
            s++;                  // زوّد عداد المسافات
        else if (isalpha(ch)) // لو حرف أبجدي (a-z / A-Z)
            a++;                  // زوّد عداد الحروف
        else if (isdigit(ch))  // لو رقم (0-9)
            d++;                  // زوّد عداد الأرقام
    }
    input.close(); // نقفل الملف بعد ما خلصنا قراءة

    // نطبع النتيجة
    cout << "Number of Spaces = " << s << endl;
    cout << "Number of Alphabets = " << a << endl;
    cout << "Number of Digits = " << d << endl;

    return 0;
}

// الناتج المتوقع (Output):
// Number of Spaces = 2
// Number of Alphabets = 15
// Number of Digits = 3
