#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
    Student(string, int);
    void setAge(int);
    void setName(string);
    int getAge();
    string getName();
    void printStudentInfo();
    bool compareName(Student a, Student b);
    bool compareAge(Student a, Student b);


    int age;
    string name;
};

#endif // STUDENT_H
