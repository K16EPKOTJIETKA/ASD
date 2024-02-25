#include <iostream>
using namespace std;

int main()
{
	unsigned int firstFibonacciNumbers, num1 = 0, num2 = 1;
	cout << "Enter number: ";
	cin >> firstFibonacciNumbers;
	cout << "The first " << firstFibonacciNumbers << " first Fibonacci numbers: " << endl; 
	cout << num1 << " " << num2 << " ";
	for (int i = 0; i < (firstFibonacciNumbers - 2) / 2; i++)
	{
		num1 = num1 + num2;
		num2 = num1 + num2;
		cout << num1 << " " << num2 << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}