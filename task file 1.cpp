#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int id;
    float grade;

    cout << "Enter Student Full Name: ";
    getline(cin, name);

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter Student Grade: ";
    cin >> grade;

    ofstream myfile;
    myfile.open("Student.txt");

    myfile << "Student Name: " << name << endl;
    myfile << "Student ID: " << id << endl;
    myfile << "Student Grade: " << grade << endl;

    myfile.close();

    return 0;
}
