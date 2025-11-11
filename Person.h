#include <iostream>
using namespace std;
#include <string>


#ifndef PERSON_H
#define PERSON_H

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
