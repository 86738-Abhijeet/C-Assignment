#include <iostream>
using namespace std;

int main()
{
    int i, num, fact = 1;
    cout << "Enter any number : ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial of "<<num<<" = "<<fact;
    return 0;
}