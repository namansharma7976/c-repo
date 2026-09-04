//51 write a program to find smallest number from 2d array
#include<iostream>
using namespace std;
int main()
{
    
    int a[2][3]={{6,8,3},
                 {89,2,10}};
    int smallest=a[0][0];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
            if(a[i][j]<smallest)
            smallest=a[i][j];
            
        }
        cout<<endl;
    }
    cout<<"smaller number: "<<smallest;
    return 0;             

}