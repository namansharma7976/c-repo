//30 write a program to find tro check odd number 1 to 25 using for loops
#include<iostream>
using namespace std;
int main()
{
    for (int i=1;i<=25;i++)
    {
        cout<<i<<endl;

        if(i%2!=0)
        cout<<"number is odd"<<" "<<endl;
        else 
        cout<<"number is even"<<" "<<endl;
    
    }
    return 0;
}