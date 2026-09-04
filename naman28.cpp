//28 write a programto check number is even from 1 to 10 using while loop
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=10)
    {
        if(i%2==0)
        cout<<i<<"is even"<<endl;
        else 
        cout<<i<<"is odd"<<endl;

        i++;
    }
    return 0;
}    