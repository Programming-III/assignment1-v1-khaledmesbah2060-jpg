#include<iostream>
#include"Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include<string>
using namespace std;


Animal::Animal(){
name= "";
age=0;
isHungry=false;
}
Animal::Animal(string n, int a, bool h) {
name=n;
age=a;
isHungry=h;
}
Animal::~Animal() {}

string Animal::getName()  {
    return name;
     }
int Animal::getAge()  {
    return age;
     }
bool Animal::getIsHungry()  {
    return isHungry;
     }

void Animal::setName(string n) {
    name = n;
     }
void Animal::setAge(int a) {
    age = a;
     }
void Animal::setIsHungry(bool h) {
    isHungry = h;
    }

void Animal::display()  {
    cout << name << " (Age: " << age << ", "
         << (isHungry ? "Hungry" : "Not Hungry") << ")";
}

void Animal::feed() {
    if (isHungry) {
        cout << name << " has been fed." << endl;
        isHungry = false;
    } else {
        cout << name << " is not hungry." << endl;
    }
}

Mammal::Mammal() {
furColor="";
}
Mammal::Mammal(string n, int a, bool h, string f){
furColor=f;
}
Mammal::~Mammal() {}

void Mammal::setFurColor(string c) {
     furColor = c;
      }
string Mammal::getFurColor()  {
    return furColor;
    }


Bird::Bird(){
wingSpan=0.0f;
}

Bird::Bird(string n, int a, bool h, float s) {
wingSpan=s;
}

Bird::~Bird() {}

void Bird::setWingSpan(float w) {
     wingSpan = w;
      }
float Bird::getWingSpan()  {
     return wingSpan;
      }



Reptile::Reptile() {
isVenomous=false;
}

Reptile::Reptile(string n, int a, bool h, bool v){
isVenomous=v;
}

Reptile::~Reptile() {}

void Reptile::setIsVenomous(bool v) {
    isVenomous = v;
    }
bool Reptile::getIsVenomous()  {
    return isVenomous;
     }


Enclosure::Enclosure() {
    animal = new Animal[capacity];
    capacity=0;
    currentCount=0;
}

Enclosure::Enclosure(int c , int cc){
animal = new Animal[capacity];
capacity=c;
currentCount=cc;
}


Enclosure::~Enclosure() {

    delete[] animal;
}

void Enclosure::addAnimal(Animal* a) {
    if (currentCount < capacity) {
        animal[currentCount++] = a;
    } else {
        cout << "Enclosure is full!" << endl;
    }
}

void Enclosure::displayAnimals()  {
    cout << "Enclosure 1 Animals:" << endl;
    for (int i = 0; i < currentCount; i++) {
        animal[i].display();
        cout << endl;
    }
}


Visitor::Visitor() {
visitorName="";
ticketsBought=0;
}
Visitor::Visitor(string v, int t)  {
visitorName=v;
ticketsBought=t;
}
Visitor::~Visitor() {}

void Visitor::setVisitorName(string n) {
    visitorName = n;
     }
void Visitor::setTicketsBought(int t) {
     ticketsBought = t;
     }
string Visitor::getVisitorName()  {
    return visitorName;
    }
int Visitor::getTicketsBought()  {
    return ticketsBought;
    }

void Visitor::displayInfo()  {
    cout << "Visitor Info:" << endl;
    cout << "Name: " << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}


int main() {
    Enclosure enclosure(3,0);

    Animal* a1 = new Mammal("Lion", 5, true, "Golden");
    Animal* a2 = new Bird("Parrot", 2, false, 0.25f);
    Animal* a3 = new Reptile("Snake", 3, true, true);

    enclosure.addAnimal(a1);
    enclosure.addAnimal(a2);
    enclosure.addAnimal(a3);

    Visitor v("Sarah Ali", 3);

    enclosure.displayAnimals();
    v.displayInfo();

    return 0;
}
