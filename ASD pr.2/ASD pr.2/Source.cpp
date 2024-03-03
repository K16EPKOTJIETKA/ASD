#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введіть число М: ";
	int M, size = 0;
	cin >> M;
	int X[16];
	cout << "Введіть елементи масиву (повіинні бути позітивні, негативні елементи та 0)" << endl;
	int j = 0;
	int* Y = new int[size];
	for (int i = 0; i < 16; i++)
	{
		cout << "Елемент" << i + 1 << " : ";
		cin >> X[i];
		if (abs(X[i]) > abs(M))
		{
			size++;
			Y[j] = X[i];
			j++;
		}
	}
	cout << "Число М: " << M << endl;
	cout << "Масив Х: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << X[i] << " ";
	}
	cout << endl;
	cout << "Масив Y: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << Y[i] << " ";
	}
	cout << endl;
	system("pause");
	delete[] Y;
	return 0;
}