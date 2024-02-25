#include <iostream>
using namespace std;

int main()
{
	int number, i = 2;
	cout << "Input number that >= 2: ";
	cin >> number;
	if (number < 2)
	{
		cout << "Error! " << endl;
	}
	while (number % i != 0)
	{
		i++;
	}
	cout << "Minimum divisior of number = " << i << endl;
	system("pause");
	return 0;
}