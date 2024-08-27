#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char s[50];
    cout << "Enter string : ";
    gets(s);
    int sLength = strlen(s);
    cout << "string is = " << s<<"\n";
    cout << "len = " << sLength<<"\n";

    for (int i = sLength - 1; i >= 0;i--)
    {
        cout <<s[i];
    }

    return 0;
}

