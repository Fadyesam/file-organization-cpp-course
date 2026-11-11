#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int empno;
    string fname;
    string lname;
    float salary;
};

int main()
{
    Employee emp1;
    
    // Assign values to emp1
    emp1.empno = 10;
    emp1.fname = "Ahmed";
    emp1.lname = "Ibrahim";
    emp1.salary = 3000;
    
    // Display the values of emp1
    cout << "Employee Number: " << emp1.empno << endl;
    cout << "First Name: " << emp1.fname << endl;
    cout << "Last Name: " << emp1.lname << endl;
    cout << "Salary: " << emp1.salary << endl;
    
    return 0;
}
