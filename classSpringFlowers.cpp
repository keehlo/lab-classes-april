#include <iostream>
#include <vector>
#include "classFlowers.h"
using namespace std;

class SpringFlowers: public Flowers
{
public:
    SpringFlowers(string name, string price) {
        this -> name = name;
        this -> price = price;
    }
    void setName(string name){
        this -> name = name;
    }
    string getName() {
        return name;
    }
    string getType() {
        return "spring flower";
    }
    void setPrice(string price){
        this -> price = price;
    }
    string getPrice(){
        return price;
    }
    string flowersScent(){
        return name + "smells like a fresh start";
    }
private:
    string name;
    string price;
};

ostream& operator<<(ostream& os, SpringFlowers& flower){
    os << "name: " << flower.getName() << endl;
    os << "price: " << flower.getPrice() << endl;
    return os;
}