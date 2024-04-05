#ifndef HPP_CLASSSUMMERFLOWERS
#define HPP_CLASSSUMMERFLOWERS
#include <iostream>
#include <vector>
#include "classFlowers.h"
using namespace std;

class SummerFlowers: public Flowers
{
public:
    SummerFlowers(string name, string price): name(name), price(price) {}
    void setName(string name){
        this -> name = name;
    }
    string getName() {
        return name;
    }
    string getType() {
        return "summer flower";
    }
    void setPrice(string price){
        this -> price = price;
    }
    string getPrice(){
        return price;
    }
    string flowersScent(){
        return name + "smells like sea";
    }
private:
    string name;
    string price;
};

ostream& operator<<(ostream& os, SummerFlowers& flower){
    os << "name: " << flower.getName() << endl;
    os << "price: " << flower.getPrice() << endl;
    return os;
}
#endif
