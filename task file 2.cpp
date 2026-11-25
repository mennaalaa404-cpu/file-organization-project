#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string x, y, z;

    ifstream in("fruit.txt");

    in >> x >> y >> z;

    in.close();

    ofstream out("fruit.txt", ios::app);

    out << "Fresh Fruits" <<endl;

    out.close();

    return 0;
}