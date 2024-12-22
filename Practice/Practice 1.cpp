#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string readfile;

    ofstream file("Yo.txt");
    file << "Today is Sunday.";
    file.close();

    ifstream file001("Yo.txt");
    file001 >> readfile;
    file001.close();

    cout << "Read from file: " << readfile << endl;
    cout << "Hello World" << endl;

    return 0;
}