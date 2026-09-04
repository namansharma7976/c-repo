//write a program to create a function no parameter with return type.
#include<iostream>
using namespace std;
int getNumber()
{
    return 42;
}

int main()
{
    int num = getNumber();
    cout << "The number is: " << num << endl;
    return 0;
}
