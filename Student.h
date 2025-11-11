#include <iostream>
using namespace std;
#include <string>
#include "person.h"


#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person{
    private: 
        int yearLevel;
        string major;
    public:
        Student();
        Student(int yearLevel, string major);
        ~Student();
        void display();
};
#endif
