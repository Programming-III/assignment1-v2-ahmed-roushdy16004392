#include <iostream>
using namespace std;
#include <string>
#include "person.h"


#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

class Instructor : public Person{
    private:
        string department;
        int experienceYears;
    public:
        Instructor();
        Instructor(string dep, int expYears);
        ~Instructor();
        void display();
};    
#endif
