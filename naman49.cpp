//49 write a program to find greatest and smallest number from 1d array and then find the sum of them:
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 25, 7, 40, 15};

    int greatest = a[0];
    int smallest = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > greatest)
        {
            greatest = a[i];
        }

        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    int sum = greatest + smallest;

    cout << "Greatest number = " << greatest << endl;
    cout << "Smallest number = " << smallest << endl;
    cout << "Sum = " << sum;

    return 0;
}