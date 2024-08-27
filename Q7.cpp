#include<iostream>
using namespace std;

int main()
{
    int no;
    cout << "Enter any number ? ";
    cin >> no;

    for (int i = 1; i <= 10; i++)
    {
        cout << no << " x " << i << " = " << no * i<<endl;
    }
    
    return 0;
}