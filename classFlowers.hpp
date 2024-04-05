#ifndef H_CLASSFLOWERS
#define H_CLASSFLOWERS
#include <iostream>
#include <vector>
using namespace std;

class Flowers
{
public:
    virtual void setName(string name){
        this -> name = name;
    }
    virtual string getName() {
        return "flower name";
    }
    virtual string getType() {
        return "flower type";
    }
    virtual void setPrice(string price){
        this -> price = price;
    }
    virtual string getPrice(){
        return 0;
    }
    virtual string flowersScent(){
        return "smells like smth";
    }
private:
    string name;
    string price;
};

#endif