#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream o1;
    string line;
    o1.open("sample.txt");
    while (o1)
    {
        getline(cin, line);
        if(line == "-1")
            break;
        o1 << line << endl;
    }
    o1.close();   
    ifstream i1;
    i1.open("sample.txt");
    while (getline(i1, line))
    {
        cout << line << endl;
    }
    i1.close();
    return 0;
}