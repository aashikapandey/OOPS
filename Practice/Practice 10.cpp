#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st1="akash mahawar 358793472729";
    // opening files usng constructor and writing it
    ofstream o1("sample.txt"); //writing opertaion
    o1<<st1;
    return 0;
}