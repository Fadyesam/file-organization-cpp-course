// ============================================================
// Example 3: برنامج بيرتّب الأرقام اللي في ملف ترتيب تنازلي (Descending)
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
    int line;            
    vector<int> data;    
    while (input >> line)
    {
        data.push_back(line); 
    }

    // الباراميتر التالت greater<int>() بيقلب الترتيب لتنازلي
    // (الأكبر الأول). الأحسن تتكتب بعد اللوب مش جواه
    sort(data.begin(), data.end(), greater<int>());

    input.close(); // نقفل الملف

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
// 33 10 9 8 5 4 2 1   (كل رقم في سطر بسبب endl)
