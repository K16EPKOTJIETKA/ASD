#include <iostream>
using namespace std;

int main()
{
	float number, lenght, sum = 0;
	cout << "Input number: ";
	cin >> number;
	cout << "Input number of numbers: ";
	cin >> lenght;
	cout << "Your numbers: " << endl;
	for (int i = 0; i < lenght; i++)
	{
		cout << number << " ";
		sum += number;
		number /= 2;
		
	}
	cout << endl;
	cout << "Sum of numbers = " << sum << endl;
	system("pause");
	return 0;
}