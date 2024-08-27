#include <iostream>
using namespace std;

typedef class student
{
public:
    int studentRollNo;
    char studentName[20];
} student;

void storeStudentData(student *, int);
void displayStudentData(student *, int);

int main()
{
    student arr[10];
    storeStudentData(arr, 10);
    displayStudentData(arr, 10);
}

void storeStudentData(student *arr, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        cout << "Enter " << i + 1 << " student name :";
        cin >> arr[i].studentName;
        cout << "Enter " << i + 1 << " student roll no :";
        cin >> arr[i].studentRollNo;
    }
}
void displayStudentData(student *arr, int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        cout << "\n\n"
             << i + 1 << " student name is " << arr[i].studentName << " and his roll no. is " << arr[i].studentRollNo;
    }
}

