#ifndef PERSON_H
#define PERSON_H
#include <iostream>

#include <string>
using namespace std;

//#write Person class here
class Person {
    private: 
        string name;
        int id;
    public:
        Person();
        Person(string name, int id);
        ~Person();
        void display();
        string getName();
        int getID();
};


#endif
