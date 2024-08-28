#include <iostream>
#include <string.h>
using namespace std;

struct Employee
{ char name[20];
  char lastName[20];
  double salary;
};

Employee emp_init(Employee);
Employee setSalary(Employee, double);
void displayEmployeeData();

Employee emp_init(Employee e)
{
  cout << "Enter employee name : ";
  cin >> e.name;
  cout << "Enter employee last name : ";
  cin >> e.lastName;
  cout << "Enter employee salary : ";
  cin >> e.salary;
  return e;
}

Employee setSalary(Employee e, double sal){
  e.salary = sal*12;
  return e;
}


double getYearlySalary(Employee e){
  cout << "Employee yearly salary is : " << e.salary*12 << endl;
  return e.salary*12;
}

void getYearlySalaryWithGain(double sal){
  sal = sal + (sal / 10);
  cout << "Emplyee yearly salary with 10% gain : " << sal;
}

void displayEmployeeData(Employee e)
{
    cout << "\nEmployee name is : " << e.name << endl;
    cout << "Employee last name is : " << e.lastName << endl;
}


int main()
{
  Employee e1;
  Employee e2 = emp_init(e1);
  displayEmployeeData(e2);
  double salary = getYearlySalary(e2);
//  cout << "salary " << salary;
  getYearlySalaryWithGain(salary);
}
