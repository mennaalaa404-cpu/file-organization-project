#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[20];
    int id;
    float grade;
    char choice;

    ofstream file("students.txt", ios::app);

    do
    {
        cout << "Enter student name: ";
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        file << name << ", " << id << ", " << grade << " $"
             << endl;

        cout << "Do you want to add more students? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y');

    file.close();

    return 0;
}