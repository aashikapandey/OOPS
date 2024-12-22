#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st2;

    // opening files usng constructor and reading it
    ifstream i1("sample.txt"); // reading opertaion
    i1>>st2;
    cout<<st2;
    i1>>st2;
    i1.close();
    return 0;
}