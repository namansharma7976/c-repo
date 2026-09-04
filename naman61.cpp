#include <iostream>
using namespace std;

void arithmeticOperations(int a, int b)
{
	cout << "Add = " << a + b << endl;
	cout << "Sub = " << a - b << endl;
	cout << "Multiply = " << a * b << endl;
	if (b != 0)
	{
		cout << "Division = " << float(a/ b) << endl;
	}
	else
	{
		cout << "Division is not possible by zero." << endl;
	}
}

int main()
{
	int a, b;

	cout << "Enter two numbers: ";
	cin >>a>> b;

	arithmeticOperations(a, b);
	return 0;
}
