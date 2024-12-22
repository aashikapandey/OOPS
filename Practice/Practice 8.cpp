#include<bits/stdc++.h>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(5);
    cout<<"enter the Input: ";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    // opening files usng constructor and reading it
    ofstream i1;
    i1.open("sample.txt"); // reading opertaion
    i1<<"Original Data "<<endl;
    for(int i=0;i<5;i++){
        i1<<arr[i]<<" ";
    };

    i1<<"\nsorted data "<<endl;
    sort(arr.begin(), arr.end());
    for(int i=0;i<5;i++){
        i1<<arr[i]<<" ";
    };
    i1.close();
    return 0;
}