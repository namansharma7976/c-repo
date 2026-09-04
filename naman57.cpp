//basic code to create function:
/*#include<iostream>
using namespace std;
void message()
{
    cout<<"hello world!";
}
int main()
{
    message();
    return 0;
}*/

//a program of sum of two numbers using functions
/*#include<iostream>
using namespace std;
int sum(int a , int b)
{  
    int s=a+b;
    return s;
}

int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"sum="<<sum(a,b)<<endl;
    return 0;
}*/

// to make a function of minimum of two numbers;
#include<iostream>
using namespace std;
int minoftwo(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;

    cout<<"min="<<minoftwo(a,b)<<endl;
    return 0;
}