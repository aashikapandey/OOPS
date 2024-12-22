#include <iostream>
#include <string>
#include <exception>
using namespace std;
class outOfStcok : public exception{
    string message1;
    public:
    outOfStcok():message1("item is out of stock or exceeds available quantity.") {
    }
    const char* what() const{
        return message1;
    }
};

class emptyCart : public exception{
    string message2;
    public:
    emptyCart():message2("your cart is empty") {
    }
    const char* what() const{
        return message2;
    }
}; 

class OnlineShoppingSystem {
    string nameOfItem;
    int item[10];
    string stock[10];
    int cartQuantity[10];
    int cart_size;
    int count;

    public:
    OnlineShoppingSystem(){
        nameOfItem=0;
        item=0;
        stock=0;
        cartQuantity=0;
        cart_size=0;
        count=0;
    }
    OnlineShoppingSystem(string nameOfItem, int item, string stock, int cartQuantity, ){
        this->nameOfItem=nameOfItem;
        this->price=price;
        this->quantity=quantity;
        this->
    }
    void addItemToCart(string nameOfItem, int price, int quantity){
       item(count)=name;
       stock(count)+=quantity;
       count++;
    }
    void addItemCart(string nameOfItem, int quantity){
        for(int i=0;i<count;i++){
            if(item)
        }
    }


};