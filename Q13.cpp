#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int flag;
    const char *strings[6] = {
        "Dev",
        "Rajesh",
        "Kartik",
        "Ganesh",
        "Mayur",
        "Ganesh"};

    int checked[6] = {0};

    printf("Duplicate strings are : ");

    for (int i = 0; i < 6; i++)
    {

        if (checked[i])
            continue;

        for (int j = i + 1; j < 6; j++)
        {

            if (checked[j])
                continue;

            if (strcmp(strings[i], strings[j]) == 0)
            {

                printf("%s\n", strings[i]);

                checked[j] = 1;

                break;
            }
        }

        checked[i] = 1;
    }
    return 0;
}