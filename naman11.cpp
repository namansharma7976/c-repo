//11 write a program to check year is leap year or not:
#include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter a year:";
    cin>>a;
    if ((a%4==0&&a%100!=0)||(a%400==0))
    cout<<"year is leap year";
    else
    cout<<"year is not a leap year";
    return 0;
}