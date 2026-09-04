//write a program to find greatest number from 1d array
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 25, 7, 40, 15};
    int greatest = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
        }
    }

    cout << "Greatest number = " << greatest;

    return 0;
}