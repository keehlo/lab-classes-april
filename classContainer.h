#ifndef HPP_CLASSCONTAINER
#define HPP_CLASSCONTAINER
#include <iostream>
#include <vector>
#include "classFlowers.h"
#include "classWinterFlowers.h"
#include "classSpringFlowers.h"
#include "classSummerFlowers.h"
#include "classAutumnFlowers.h"
using namespace std;

class Container {
public:
    void addFlower(WinterFlowers flower){
        winter.push_back(flower);
    }
    void addFlower(SpringFlowers flower){
        spring.push_back(flower);
    }
    void addFlower(SummerFlowers flower){
        summer.push_back(flower);
    }
    void addFlower(AutumnFlowers flower){
        autumn.push_back(flower);
    }
    string getFlower(string name){
        for (int i = 0; i < winter.size(); i++)
        {
            if (winter[i].getName() == name)
            {
                return winter[i].getPrice();
            }
        }
        for (int i = 0; i < spring.size(); i++)
        {
            if (spring[i].getName() == name)
            {
                return spring[i].getPrice();
            }
        }
        for (int i = 0; i < summer.size(); i++)
        {
            if (summer[i].getName() == name)
            {
                return summer[i].getPrice();
            }
        }
        for (int i = 0; i < autumn.size(); i++)
        {
            if (autumn[i].getName() == name)
            {
                return autumn[i].getPrice();
            }
        }
        return "no such flower has been found!";
    }

    void printAllFlowers(){
        for (int i = 0; i < winter.size(); i++)
        {
            cout << winter[i] << endl;
        }
        for (int i = 0; i < spring.size(); i++)
        {
            cout << spring[i] << endl;
        }
        for (int i = 0; i < summer.size(); i++)
        {
            cout << summer[i] << endl;
        }
        for (int i = 0; i < autumn.size(); i++)
        {
            cout << autumn[i] << endl;
        }
    }

    void printSeasonFlowers(){
            string seasonNumber;
            cout << "for winter enter 1" << endl << "for spring enter 2" << endl << 
            "for summer enter 3" << endl << "for autumn enter 4" << endl;
            cout << "season number: ";
            cin >> seasonNumber;
            if (seasonNumber == "1")
            {
                for (int i = 0; i < winter.size(); i++) cout << winter[i];
            } else if (seasonNumber == "2")
            {
                for (int i = 0; i < spring.size(); i++) cout << spring[i];
            } else if (seasonNumber == "3")
            {
                for (int i = 0; i < summer.size(); i++) cout << summer[i];
            } else if (seasonNumber == "4")
            {
                for (int i = 0; i < autumn.size(); i++) cout << autumn[i];
            } else {
                cout << "incorrect value of the input, please, try again" << endl;
            }
    }

    void createFlower(){
        string flowersSeasonType;
        string flowersName;
        string flowersPrice;
        cout << endl << "for winter flower type enter 1" << endl << "for spring flower type enter 2" << endl << 
        "for summer flower type enter 3" << endl << "for autumn flower type enter 4" << endl;
        cout << endl << "enter the flower's type: ";
        cin >> flowersSeasonType;
        while (flowersSeasonType != "1" && flowersSeasonType != "2" && flowersSeasonType != "3" && flowersSeasonType != "4"){
            cout << "incorrect season type, please try again" << endl;
            cin >> flowersSeasonType;
        }
        cout << endl << "enter the flower's name: ";
        while(true){
            cin >> flowersName;
            bool flag = false;
            for(int i = 0; i < winter.size(); i++){
                if(flowersName == winter[i].getName()){
                    flag = true;
                }
            }
            for(int i = 0; i < spring.size(); i++){
                if(flowersName == spring[i].getName()){
                    flag = true;
                }
            }
            for(int i = 0; i < summer.size(); i++){
                if(flowersName == summer[i].getName()){
                    flag = true;
                }
            }
            for(int i = 0; i < autumn.size(); i++){
                if(flowersName == autumn[i].getName()){
                    flag = true;
                }
            }
            if(flag){
                cout << "this flower already exists, please try again" << endl;
            } else {
                break;
            }
        }
        cout << endl << "enter the flower's price: ";
        while(true){
            cin >> flowersPrice;
            bool flag = false;
            for(int i = 0; i < flowersPrice.size(); i++){
                if(flowersPrice[i] > 57 || flowersPrice[i] < 48){
                    flag = true;
                }
            }
            if(flag){
                cout << "incorrect value of the price, please try again" << endl;
            } else {
                break;
            }
        }
        if (flowersSeasonType == "1")
        {
            WinterFlowers flower(flowersName, flowersPrice);
            winter.push_back(flower);
        } else if (flowersSeasonType == "2")
        {
            SpringFlowers flower(flowersName, flowersPrice);
            spring.push_back(flower);
        } else if (flowersSeasonType == "3")
        {
            SummerFlowers flower(flowersName, flowersPrice);
            summer.push_back(flower);
        } else if (flowersSeasonType == "4")
        {
            AutumnFlowers flower(flowersName, flowersPrice);
            autumn.push_back(flower);
        } else {
            cout << "incorrect value of the input, please, try again" << endl;
        }
    }
private:
    vector<WinterFlowers> winter;
    vector<SpringFlowers> spring;
    vector<SummerFlowers> summer;
    vector<AutumnFlowers> autumn;
};
#endif