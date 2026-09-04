//27 write a program to print tables using for loops
#include<iostream>
using namespace std;
int main()
 {
    int n;
    cout<<"enter a number to print table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<" "<<endl;

    }
    
    return 0;
 }