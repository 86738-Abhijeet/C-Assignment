#include <iostream>
#include <string.h>
using namespace std;

void myfun();

int main()
{
    myfun();
    return 0;
}

void myfun()
{

    char arr[50];
    int n, i, c = 0;
    cout << "Enter the string : ";
    cin >> arr;
    
    n = strlen(arr);
    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
            c++;
    }
    if (c == i)
        cout << "String is palindrome...";
    else
        cout << "String is not palindrome...";
}