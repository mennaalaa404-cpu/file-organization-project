#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    int n;
    vector<Person> persons;

    cout << "Enter number of persons: ";
    cin >> n;

    ofstream outFile("persons.txt");

    for (int i = 0; i < n; i++)
    {
        Person p;

        cout << "Enter name: ";
        getline(cin>>ws,p.name);

        cout << "Enter age: ";
        cin >> p.age;

        outFile <<p.name<<endl<<p.age<<endl;
    }

    outFile.close();

    ifstream inFile("persons.txt");

    Person p;

    while (getline(inFile >> ws, p.name) && (inFile >> p.age))
    {
        persons.push_back(p);
    }

    inFile.close();

   if (persons.empty())
{
    cout << "No persons";
    return 0;
}

    Person younger = persons[0];
    Person older = persons[0];

    for (int i = 1; i < persons.size(); i++)
    {
        if (persons[i].age < younger.age)
            younger = persons[i];

        if (persons[i].age > older.age)
            older = persons[i];
    }

    ofstream resultFile("results.txt");

    resultFile << "Younger Person: "
               << younger.name << " "
               << younger.age << endl;

    resultFile << "Older Person: "
               << older.name << " "
               << older.age << endl;

    resultFile.close();

    cout << "\nResults saved successfully in results.txt";

    return 0;
}