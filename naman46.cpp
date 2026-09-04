//46 write a program to print sum of elements of 1d array
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    cout << "Sum of elements = " << sum;

    return 0;
}