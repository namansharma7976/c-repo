//write a program to create a function with parameter with return type.
#include<iostream>  
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 10);
    cout << "Sum: " << result << endl;
    return 0;
}