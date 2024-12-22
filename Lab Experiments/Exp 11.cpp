#include<iostream>
using namespace std;

template<typename T>
class Stack{
    // int* arr;
    T *arr;
    int size;
    int top;
    public: 
       Stack();
       void push(T);
       T pop();
       bool isFull();
       bool isEmpty();
};

template<typename T>
Stack<T>::Stack(){  // <T> indicates that this class is template class
    size=5;
    arr=new T[size];
    top=-1;
}

template<typename T>
void Stack<T>::push(T data){
    if (isFull()) {
        cout << "Stack Overflow. Unable to push " << data << endl;
        return;
    }
     arr[++top]=data;
}

template<typename T>
T Stack<T>::pop(){
    return arr[top--];
}

template<typename T>
bool Stack<T>::isFull(){
    return top==size-1;
}

template<typename T>
bool Stack<T>::isEmpty(){
    return top==-1;
}

int main(){
    // Stack s1;
    /* Difference between function tempalte and class tempalte is : 
    function tempalte are automatically instanciated and class templates, we have to instanciate expliciatlly
    */
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    Stack<const char*> s2;
    s2.push("akash");
    s2.push("is");
    s2.push("hacker");
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    cout<<s2.pop()<<endl;
    return 0;
}

//Exp_11