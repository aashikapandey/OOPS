#include<iostream>
using namespace std;

// class complex{
//     int x,y;
//     public: 
//     complex(){
//         x=0;
//         y=0;
        
//     }
//     complex(int x, int y){
//         this->x=x;
//         this->y=y;
//     }
//     void display(){
//         cout<<x<<":"<<y<<endl;
//     }
//     friend complex operator+(complex c, complex d);
// };

// complex operator+(complex c, complex d){
//         complex temp;
//         temp.x=c.x+d.x;
//         temp.y=c.y+d.y;
//         return temp;
// }

// int main(){
//     complex c1(2,50),c2(4,80);
//     complex c3;
//     c3=c1+c2;
//     c3.display();
    
// }

class Time{
    int h, m;
    public:
    void setTime(){
        cin>>h>>m;
    }
    Time(){

    }
    Time(int hr, int min):h(hr),m(min){}

    friend Time operator +(Time o1, Time o2);

    void display(){
        cout<<h<<endl;
        cout<<m<<endl;
    }
};

Time operator +(Time o1, Time o2) {
    Time temp; 
    temp.h = o1.h + o2.h; 
    temp.m = o1.m + o2.m; 
    while(temp.m>=60){
            temp.h++;
            temp.m=temp.m-60;
    }
    return temp; 
}

int main(){
    Time t1(2,70),t2(5,50);
    Time t3;
    t3=t1+t2;
    t3.display();
}

/*
unary operator: 
syntex: Member Function:--- A opertor ++(empty){}

        friend function :--- A operator ++(class &ob){}

binary opertaor
syntex: Member Function:--- A opertor +(A ob){} ------> only one parameter

        friend function :--- A operator +(A o1, A o2){}

*/