#include <iostream>
using namespace std;

bool isPalindrome(int number)
{
	int originalNumber = number;
	int backwards = 0;

	while (number > 0)
	{
		int lastDigit = number % 10;
		backwards = backwards * 10 + lastDigit;
		number = number / 10;
	}

	return originalNumber == backwards;
}

int main()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	if (isPalindrome(number))
	{
		cout << "It is a palindrome number." << endl;
	}
	else
	{
		cout << "It is not a palindrome number." << endl;
	}

	return 0;
}
