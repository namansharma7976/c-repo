// 14 write a program to print weeks using conditional statement
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number from 1 to 7 to print weeks:";
    cin>>a;

    if(a==1)
    cout<<"sunday";
    else if (a==2)
    cout<<"monday";
    else if(a==3)
    cout<<"tuesday";
    else if (a==4)
    cout<<"wednesday";
    else if (a==5)
    cout<<"thurdsday";
    else if(a==6)
    cout<<"firday";
    else if (a==7)
    cout<<"saturday";
    else 
    cout<<"invalid number, can't print week :(";
    return 0;

}