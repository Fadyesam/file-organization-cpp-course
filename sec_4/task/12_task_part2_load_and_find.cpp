#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// A structure representing one person
struct Person
{
    string name;
    int age;
};

int main()
{
    ifstream inFile("persons.txt");

    if (!inFile)
    {
        cout << "Error opening persons.txt" << endl;
        return 1;
    }

    // Vector that will contain all persons
    vector<Person> persons;

    Person p;

    // Read name and age until end of file
    while (inFile >> p.name >> p.age)
    {
        persons.push_back(p);
    }

    inFile.close();

    // Make sure that the file contained data
    if (persons.size() == 0)
    {
        cout << "No persons found." << endl;
        return 0;
    }

    // Assume first person is both youngest and oldest
    Person youngest = persons[0];
    Person oldest = persons[0];

    // Compare remaining persons
    for (int i = 1; i < persons.size(); i++)
    {
        if (persons[i].age < youngest.age)
        {
            youngest = persons[i];
        }

        if (persons[i].age > oldest.age)
        {
            oldest = persons[i];
        }
    }

    // Save results in another file
    ofstream resultFile("results.txt");

    if (!resultFile)
    {
        cout << "Error opening results.txt" << endl;
        return 1;
    }

    resultFile << "Youngest Person:\n";
    resultFile << youngest.name << " " << youngest.age << endl;

    resultFile << "\nOldest Person:\n";
    resultFile << oldest.name << " " << oldest.age << endl;

    resultFile.close();

    cout << "Results saved successfully." << endl;

    return 0;
}
