#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Bird:public Animal{
private:
    float wingSpan;
public:
    Bird();
    Bird(string n, int a, bool h,float s);
    ~Bird();
    void setWingSpan(float w);
    float getWingSpan();

};


#endif // BIRD_H_INCLUDED
