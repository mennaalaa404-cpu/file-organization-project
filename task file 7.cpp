#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> names;

    names.push_back("Hadeer Mahmoud");
    names.push_back("Youssef Ali");
    names.push_back("Ahmed Mostafa");
    names.push_back("Esraa Ebrahim");

    sort(names.begin(), names.end());

    cout << "Names sorted Successfully" << endl;

    for(int i = 0; i < names.size(); i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}