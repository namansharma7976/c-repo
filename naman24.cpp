//24 write a program to check whether the alphabet is vowel or consonant

#include <iostream>
using namespace std;

int main() 
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        cout << "It is a vowel.";
    }
    else 
    {
        cout << "It is a consonant.";
    }

    return 0;
}