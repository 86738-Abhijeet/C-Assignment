#include <iostream>
using namespace std;

int main()
{
    int i, j, subjects, totalMarks = 0;
    cout << "Enter how many subject marks you insert ? ";
    cin >> subjects;
    int arr[subjects];

    for (i = 1; i <= subjects; i++)
    {
        cout << "Enter " << i << " subject marks : ";
        cin >> arr[i];
    }

    for (i = 1; i <= subjects; i++)
    {
        totalMarks = totalMarks + arr[i];
    }

    totalMarks = totalMarks / subjects;
    
    if (totalMarks >= 90)
        cout << "Grade Ex";
    else if (90 > totalMarks && totalMarks >= 80)
        cout << "Grade A";
    else if (80 > totalMarks && totalMarks >= 70)
        cout << "Grade B";
    else if (70 > totalMarks && totalMarks >= 60)
        cout << "Grade C";
    else if(60 > totalMarks && totalMarks >=35)
        cout << "Grade F";
    else
        cout << "You are fail.. Try again..";

    return 0;
}