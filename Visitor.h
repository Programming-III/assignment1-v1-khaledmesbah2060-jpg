#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    void displayInfo();
    Visitor();
    Visitor(string v , int t);
    ~Visitor();
     void setVisitorName(string n);
     void setTicketsBought(int t);
     string getVisitorName();
     int getTicketsBought();

};


#endif // VISITOR_H_INCLUDED
