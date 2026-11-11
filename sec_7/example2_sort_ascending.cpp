// ============================================================
// Example 2: برنامج بيرتّب الأرقام اللي في ملف ترتيب تصاعدي (Ascending)
// الملف المقروء: numbers.txt  وجواه:  5 2 4 1 9 33 8 10
// ============================================================
#include <iostream>   
#include <fstream>     
#include <algorithm>   // فيها الدالة الجاهزة sort()
#include <vector>      
using namespace std;

int main()
{
    ifstream input("numbers.txt");
    int line;            // المتغير اللي بيشيل الرقم اللي اتقرا
    vector<int> data;    // vector هنخزن فيه كل الأرقام
    // العملية >> بتقرا رقم رقم، واللوب بيقف لما الملف يخلص
    while (input >> line)
    {
        data.push_back(line); // ضيف الرقم في آخر الـ vector
    }

    // sort(نهاية ، بداية) -> الترتيب الافتراضي تصاعدي
    sort(data.begin(), data.end());

    input.close(); 

    cout << "Lines sorted Successfully" << endl;

    // نطبع الأرقام بعد الترتيب
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }

    return 0;
}

// الناتج المتوقع (Output):
// Lines sorted Successfully
// 1 2 4 5 8 9 10 33   (كل رقم في سطر بسبب endl)
