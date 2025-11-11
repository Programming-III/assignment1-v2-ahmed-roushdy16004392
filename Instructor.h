#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
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
