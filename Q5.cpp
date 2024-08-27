#include<iostream>
using namespace std;
int main()
{
	char ch;
    cout << "Enter any character ? \n";
    cin >> ch;
	if(ch >= 65 && ch <= 90)
		cout << "Uppercase letter..";
	else if(ch >= 97 && ch <= 122)
		cout << "Lowercase letter..";
	else if(ch >= 48 && ch <= 57)
		cout << "Number..";
	else
        cout << "other character..";

    return 0;
}