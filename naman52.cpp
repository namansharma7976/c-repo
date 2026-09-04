//52 write a program to sort 2d array into ascending order
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {9, 2, 7},
        {4, 1, 8},
        {6, 3, 5}
    };

    // Sorting all elements in ascending order
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (a[i][j] < a[k][l])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[k][l];
                        a[k][l] = temp;
                    }
                }
            }
        }
    }

    // Printing sorted array
    cout << "Array in ascending order:"<<endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}