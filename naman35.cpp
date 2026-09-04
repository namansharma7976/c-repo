//35 write a program to find the sum of even numbers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}