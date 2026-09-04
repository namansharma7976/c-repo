// 20 write a program to check number is divisible by 5 or 11 or not
#include <iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter a number:";
    cin>>a;
    if(a%5==0)
    cout<<"number is divisible by 5 ";
    else if(a%11==0)
    cout<<"number is divisible by 11";
    else 
    cout<<"number is not divisible by either 5 or 11";
    return 0;  
}