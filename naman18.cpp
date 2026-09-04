//18 to check whether the number is pelindrome or not:
#include <iostream>
using namespace std;
int main()

{
    int a,b=0,c,d;
    cout<<"enter a number:";
    cin>>a;
    d=a;
    for(;a!=0;a=a/10)
    {
        c=a%10;
        b=b*10+c;
    }
    if(d==b)
    cout<<"pelindrome";
    else 
    cout<<"not a pelindrome";
    
    return 0;

}