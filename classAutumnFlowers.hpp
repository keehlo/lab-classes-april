#ifndef HPP_CLASSAUTUMNFLOWERS
#define HPP_CLASSAUTUMNFLOWERS
#include <iostream>
#include <vector>
#include "classFlowers.hpp"
using namespace std;

class AutumnFlowers: public Flowers
{
public:
    AutumnFlowers(string name, string price): name(name), price(price) {}
    void setName(string name){
        this -> name = name;
    }
    string getName() {
        return name;
    }
    string getType() {
        return "autumn flower";
    }
    void setPrice(string price){
        this -> price = price;
    }
    string getPrice(){
        return price;
    }
private:
    string name;
    string price;
};

ostream& operator<<(ostream& os, AutumnFlowers& flower){
    os << "name: " << flower.getName() << endl;
    os << "price: " << flower.getPrice() << endl;
    return os;
}
#endif
