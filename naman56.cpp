//56 wrirte a program to create 2d array and sum of all digits 
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;

    // Calculate sum of all elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i][j];
        }
    }

    cout << "Sum of all elements = " << sum;

    return 0;
} 