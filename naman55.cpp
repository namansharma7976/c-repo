//write a program to create a 2d array and sum of first row
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

    // Sum of first row
    for (int j = 0; j < 3; j++)
    {
        sum = sum + a[0][j];
    }

    cout << "Sum of first row = " << sum;

    return 0;
}