// 8 write a program to check number is positive or negative:

#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter a number:";
    cin>>a;
    if (a<0)
    cout<<"number is negatve";
    else if (a>0)
    cout<<"number is positive";
    else 
    cout<<"number is 0";
    return 0;

}