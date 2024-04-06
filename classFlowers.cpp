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
private:
    string name;
    string price;
};
