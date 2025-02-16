#include "student.h"
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main ()
{


    int selection = 0;
    vector<Student> studentList;
    studentList.push_back(Student("Anton", 20));
    studentList.push_back(Student("Pertti", 22));
    studentList.push_back(Student("Petteri", 27));
    studentList.push_back(Student("Petrus", 42));

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.

            for(Student stud : studentList){
                stud.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b)
                {
                return a.getName() < b.getName();
                }

            );
            for(Student stud : studentList){
                stud.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b)
                {
                return a.getAge() > b.getAge();
                }
            );

            for(Student stud : studentList){
                stud.printStudentInfo();
            }
            break;

        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.

            cout << "Input student name" << endl;

            string inputS;
            cin >> inputS;

            auto it = find_if(studentList.begin(), studentList.end(), [&](Student& s){
                return s.getName() == inputS;
                }
            );

            if(it != studentList.end()){
                it->printStudentInfo();
            } else{
                cout << "Student named " << inputS << " could not be found" << endl;
            }
            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }while(selection < 5);


return 0;
}
