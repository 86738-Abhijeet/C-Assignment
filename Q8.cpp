#include <cstring>
#include <iostream>
using namespace std;

struct Student
{
    char roll[20];
    char name[20];
    int marks;
};

Student storeStudentData(Student);
void displayStudentData(Student);


int main()
{
    Student s1;
    Student s = storeStudentData(s1);
    displayStudentData(s);
}

Student storeStudentData(Student s)
{
    cout << "Enter student name : ";
    cin >> s.name;
    cout << "Enter student roll : ";
    cin >> s.roll;
    cout << "Enter student marks : ";
    cin >> s.marks;
    return s;
}

void displayStudentData(Student s)
{
    cout << "Student name is : " << s.name << endl;
    cout << "Student roll is : " << s.roll << endl;
    cout << "Student marks is : " << s.marks << endl;
}