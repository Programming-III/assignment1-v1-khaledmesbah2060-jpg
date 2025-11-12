#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    Animal();
    Animal(string n, int a, bool h);
     ~Animal();
    string getName() ;
    int getAge() ;
    bool getIsHungry() ;
    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool h);
     void display() ;
    void feed();
};

#endif
