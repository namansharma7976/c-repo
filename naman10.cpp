//10 write a program to check greater than three variables :

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if (a>b&&a>c)
    cout<<"a is greatest";
    else if (b>a&&b>c)
    cout<<"b is greateset";
    else if(c>a&&c>b)
    cout<<"c is greatest";
    else 
    cout<<"all are equal";
    return 0;
}