// 9 write a program to check greater then two variables:

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    if (a>b)
    cout<<"a is greatest";
    else if (a<b)
    cout<<"b is greatest";
    else 
    cout<<"both are equal";
    return 0;

}
