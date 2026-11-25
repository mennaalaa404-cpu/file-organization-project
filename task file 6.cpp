#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main()
{
    ofstream out("grades.txt");

    if (!out)
    {
        cout << "Unable to create the file";
        return 1;
    }

    
    out << 90 << endl;
    out << 85 << endl;
    out << 70 << endl;
    out << 95 << endl;
    out << 80 << endl;

    out.close();

    
    ifstream in("grades.txt");

    if (!in)
    {
        cout << "Unable to open the file";
        return 1;
    }

    int grade;

    cout << "Grades before deletion:\n";

    while (in >> grade)
    {
        cout << grade << endl;
    }

    in.close();

    
    int deleteGrade;

    cout << "\nEnter grade to delete: ";
    cin >> deleteGrade;

    ifstream input("grades.txt");
    ofstream temp("temp.txt");

    if (!input || !temp)
    {
        cout << "Unable to open files";
        return 1;
    }

    bool found = false;

    while (input >> grade)
    {
        if (grade != deleteGrade)
        {
            temp << grade << endl;
        }
        else
        {
            found = true;
        }
    }

    input.close();
    temp.close();

    
    if (found)
{
    if (remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0)
    {
        cout << "\nGrade deleted successfully!\n";
    }
    else
    {
        cout << "\nError: could not replace the original file!\n";
        return 1;
    }
}
else
{
    remove("temp.txt");
    cout << "\nGrade not found!\n";
}

    
    ifstream result("grades.txt");

    cout << "\nGrades after deletion:\n";

    while (result >> grade)
    {
        cout << grade << endl;
    }

    result.close();

    return 0;
}