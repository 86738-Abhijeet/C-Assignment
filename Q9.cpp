#include <iostream>
using namespace std;



int main()
{
    int no,bNo=0,rem, i=1;
    cout << "Enter any number : ";
    cin >> no;

    // convert no to binary
    while (no != 0) {
        rem = no % 2;
        no /= 2;
        bNo += rem * i;
        i *= 10;
    }
    printf("Binary number: %d\n", bNo);
    printf("%d octal is : %o\n", no, no);
    printf("%d in hex is : %x\n", no, no);


    return 0;
}





