#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	cout << "������ ����� �: ";
	int M, size = 0;
	cin >> M;
	int X[16];
	cout << "������ �������� ������ (������ ���� �������, �������� �������� �� 0)" << endl;
	int j = 0;
	int* Y = new int[size];
	for (int i = 0; i < 16; i++)
	{
		cout << "�������" << i + 1 << " : ";
		cin >> X[i];
		if (abs(X[i]) > abs(M))
		{
			size++;
			Y[j] = X[i];
			j++;
		}
	}
	cout << "����� �: " << M << endl;
	cout << "����� �: " << endl;
	for (int i = 0; i < 16; i++)
	{
		cout << X[i] << " ";
	}
	cout << endl;
	cout << "����� Y: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << Y[i] << " ";
	}
	cout << endl;
	system("pause");
	delete[] Y;
	return 0;
}