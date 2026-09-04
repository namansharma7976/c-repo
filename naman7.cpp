/*7 write a program to use the arithematic operator 
unsing conditional statement:*/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter the operator[+,-,*,/]:";
    cin>>ch;
    cout<<"enter second number:";
    cin>>b;
    if (ch=='+')
    cout<<"its addition:"<<a+b;
    else if (ch=='-')
    cout<<"its subtraction:"<<a-b;
    else if (ch=='*')
    cout<<"its multiplication:"<<a*b;
    else if (ch=='/')
    cout<<"its division:"<<a/b;
    else
    cout<<"invalid operator :(";
    return 0;
}