//19 write a program to swap two variables without using the third one
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping:";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    
    return 0;

}