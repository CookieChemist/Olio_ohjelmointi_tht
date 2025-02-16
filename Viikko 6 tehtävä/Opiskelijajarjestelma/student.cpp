#include "student.h"

Student::Student(string n, int a){
    name = n;
    age = a;
}

void Student :: setAge(int a){
    age = a;
}

void Student:: setName(string n){
    name = n;
}

int Student:: getAge(){
    return age;
}

string Student:: getName(){
    return name;
}

bool Student:: compareName(Student a, Student b){
    return a.name > b.name;
}

bool Student:: compareAge(Student a, Student b){
    return a.age > b.age;
}


void Student:: printStudentInfo(){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << "\n\n";
}
