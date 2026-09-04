//4 write a program to use the assignment operator:
# include<iostream>
using namespace std;
int main()
{
    int a ;
    cout<<"enter a number:";
    cin>>a;
    cout<<"a+=10 ="<<(a+=10)<<endl;
    cout<<"a-=10 ="<<(a-=10)<<endl;
    cout<<"a*=10 ="<<(a*=10)<<endl;
    cout<<"a/=10 ="<<(a/=10)<<endl;
    return 0;   
}