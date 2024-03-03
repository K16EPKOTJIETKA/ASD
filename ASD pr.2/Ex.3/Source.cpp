#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int atm[11] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int sumOfMoney;
	cout << "Введіть суму грошей, яку Вам потрібно зняти: ";
	cin >> sumOfMoney;
	int counter = 0;
	for (int i = 0; i < 11; i++)
	{
		while (sumOfMoney / atm[i] >= 1 and sumOfMoney != 0)
		{
			sumOfMoney -= atm[i];
			cout << atm[i] << " ";
			counter++;
		}
		if (sumOfMoney == 0) break;
	}
	cout << "\nМінімальна кількість купюр: " << counter << endl;
	system("pause");
	return 0;
}