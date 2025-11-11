#include <iostream>
using namespace std;
#include <string>


#ifndef COURSE_H
#define COURSE_H

class Course{
    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;
        int currentStudents;
    public:
        Course();
        Course(string cCode, string cName, int mStudents, int currStudents);
        void addStudent(const Student& s);
        void displayCourseInfo();
};
#endif

