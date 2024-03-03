#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int myArray[16];
	cout << "Введіть елементи масиву: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << "Елемент" << i + 1 << " : ";
		cin >> myArray[i];
	}
	cout << "Даний масив: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << myArray[i] << " ";
	}
	for (int i = 0; i < 16; i++)
	{
		if (myArray[i] < 0)
		{
			myArray[i] *= -1;
		}
	}
	cout << endl;
	cout << "Змінений масив: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << myArray[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}