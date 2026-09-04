// 17 write a program to swap two variables with using the third one :
#include<iostream>
using namespace std;
int main()

{
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"after swapping:"<<endl;
    cout<<"first number"<<a<<endl;
    cout<<"second number"<<b<<endl;
    
    return 0;

}