#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

/Person::Person(){
    this-> name = "unkown";
    this-> id = 0;
}
Person::Person(string name,int id){
    this-> name = name;
    this-> id = id;
}
void Person::display(){
    cout << "name: " << name << endl;
    cout << "id: " << id << endl;
}
Person::~Person(){
    
}
string Person::getName(){
    return this->name;
}
int Person::getID(){
    return this-> id;
}


Student::Student() : Person(){
    this->yearLevel = 0;
    this->major = "unkown";
}
Student::Student(int yearLevel, string major) : Person(getName(),getID()){
    this->yearLevel = yearLevel;
    this->major = major;
}
Student::~Student(){
    
}
void Student::display(){
    display();
    cout << "yearlevel: " << yearLevel << endl;
    cout << "major: " << major << endl;
}

Instructor::Instructor() : Person(){
    experienceYears = 0;
    department = "unkown";
}
Instructor::Instructor(string dep, int expYears) : Person(getName(),getID()){
    this->department = dep;
    this->experienceYears = expYears;
}
Instructor::~Instructor(){
    
}
void Instructor::display(){
    display();
    cout << "department: "  << department << endl;
    cout << "experienceYears:  " << experienceYears << endl;
}

Course::Course(){
    courseCode = "unkown";
    courseName = "NoName";
    maxStudents = 0;
    students = nullptr;
    currentStudents = 0;
}
Course::Course(string cCode, string cName, int mStudents, int currStudents){
    this->courseCode = cCode;
    this->courseName = cName;
    this->maxStudents = mStudents;
    this->currentStudents = currStudents;
    this->students = nullptr;
}
void Course::displayCourseInfo(){
    cout << courseCode << endl;
    cout << courseName << endl;
    cout << currentStudents << endl;
    cout << maxStudents << endl;
}
void Course::addStudent(const Student& s){
    if(currentStudents == maxStudents)
        return;
    currentStudent++;
    students[currentStudents] = s;
}

int main()
{
    Course c1;
    Person p1= new Student("omar nabil",2202);
    p1.display();
    c1.displayCourseInfo();


    return 0;
}
