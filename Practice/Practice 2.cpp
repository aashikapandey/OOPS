#include<iostream>
using namespace std;
class A{
    int x, y;
    public:
    A(){
        // int x=0;
        // int y=0;
    } 
    A(int x, int y):x(x),y(y){}
    void display(){
        cout<<x<<"_"<<y;
    }

    friend ostream& operator<< (ostream &o1, A &a1); 
};

ostream& operator<< (ostream &o1, A &a1){
    o1<<a1.x;
    o1<<a1.y;
    return o1;
}

int main(){
    A t(5,10);
    cout<<t; //---> insertion
   /// A t;
    //cin>>t; //--> extraction (for this we can make only friend fun not member fuction)
}