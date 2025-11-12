#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include<iostream>
#include<string>
#include"Animal.h"
using namespace std;

class Enclosure{
private:
    Animal * animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(int c , int cc);
    ~Enclosure();
    void addAnimal(Animal *a);
    void displayAnimals();



};

#endif // ENCLOSURE_H_INCLUDED

