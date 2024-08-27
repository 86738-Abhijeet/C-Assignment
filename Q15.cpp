#include <iostream>
using namespace std;

int main()
{
    char str[60], ch;
    int count = 0;
    cout << "Enter any string : ";
    gets(str);

    for (ch = 'A'; ch <= 'z'; ch++)
    {
        count = 0;
        for (int i = 0; str[i] != NULL; i++)
        {
            if (ch == str[i])
                count++;
        }

        if (count > 0)
            cout << ch << " found in " << count << " times.\n";
    }

    return 0;
}