#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream file("welcome.txt", ios::out);

    if (!file.is_open())
    {
        cout << "Error opening the file";
    }
    else
    {
        file << "Hello Everybody";

        file.seekp(11);
        file << "one";

        file.close();

        ifstream 
        readFile("welcome.txt");
        string line;
        getline(readFile, line);
        readFile.close();
        line.erase(14, 1);
        ofstream
        outFile("welcome.txt");
        outFile<<line;
        outFile.close();
        cout<<line;
    }

    return 0;
}