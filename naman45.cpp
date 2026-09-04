//45 write a program to sort 1d array into ascending order;
#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 2, 8, 1, 4};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}