//36 write a program to print pyramid pattern
#include <iostream>
using namespace std;

int main() 
{
   for(int i=1;i<=10;i++)
   {
    for (int p=1;p<=i;p++)
    {
        cout<<"*";
    }
    cout<<endl;
   }

    return 0;
}