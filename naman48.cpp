//48 write a program to find smallest number from 1d array
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 25, 7, 40, 15};
    int smallest = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << "Smallest number = " << smallest;

    return 0;
}