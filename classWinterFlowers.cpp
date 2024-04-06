#include <iostream>
#include <vector>
#include "classFlowers.hpp"
using namespace std;

class WinterFlowers: public Flowers
{
public:
    WinterFlowers(string name, string price): name(name), price(price) {}
    void setName(string name){
        this -> name = name;
    }
    string getName() {
        return name;
    }
    string getType() {
        return "winter flower";
    }
    void setPrice(string price){
        this -> price = price;
    }
    string getPrice(){
        return price;
    }
    string flowersScent(){
        return name + "smells like snow";
    }
private:
    string name;
    string price;
};

ostream& operator<<(ostream& os, WinterFlowers& flower){
    os << "name: " << flower.getName() << endl;
    os << "price: " << flower.getPrice() << endl;
    return os;
}
