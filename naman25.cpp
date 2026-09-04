//25 write a program to create grade calculator;
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter marks to calculate grade:";
    cin>>a;
    if(a>=0&&a<=33)
    cout<<"you got C";
    else if (a>=33&&a<=60)
    cout<<"you got B";
    else if (a>=60&&a<=80)
    cout<<"you got A";
    else if (a>=80&&a<=100)
    cout<<"you got A++";
    else 
    cout<<"invalid marks";

    return 0;

}