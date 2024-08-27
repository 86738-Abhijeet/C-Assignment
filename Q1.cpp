#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int num;
    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++)
    {
        num = atoi(argv[i]);
        if(max<num)
        {
            max = num;
        }
    }
    cout << "Max no is : " << max << ".";

    return 0;
}
