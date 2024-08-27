#include<iostream>
using namespace std;

int main()
{
    int nTerms, a = 0, b = 1, c, i;
    cout<<"Enter any number util you have to print fibbonacci series ?";
    cin >> nTerms;

    for ( i = 1; i <= nTerms; i++)
    {
        cout << a <<" ";
        c = a + b;
        a = b;
        b = c;
    }
    

    return 0;
}