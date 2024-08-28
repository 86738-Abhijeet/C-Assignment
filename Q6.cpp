#include <iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], mul[5][5];
    int r, c, i, j, k;

    cout<<"\nEnter the number of rows: ";
    cin>>r;

    cout<<"\nEnter the number of columns: ";
    cin>>c;

    cout<<"\nEnter the first matrix element: ";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    cout<<"\nEnter the second matrix element: ";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"\nMultiply matrix: ";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
