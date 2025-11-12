#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Reptile:public Animal{
private:
    bool isVenomous;
public:
    Reptile();
    Reptile(string n, int a, bool h,bool v);
    ~Reptile();
    void setIsVenomous(bool v);
    bool getIsVenomous();

};


#endif // REPTILE_H_INCLUDED
