#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int theWinningNumber = rand() % 19 + 1;
	cout << "������ ����� �� 0 �� 20!" << endl; 
	int number, attempt = 1;
	cin >> number;
	while (number != theWinningNumber)
	{
		if (number < 1 or number > 20)
		{
			cout << "������ ��������!" << endl;
			attempt++;
		}
		if (number > theWinningNumber)
		{
			cout << "������������� ����� ����� ����������" << endl;
			attempt++;
		}
		if (number < theWinningNumber)
		{
			cout << "������������� ����� ����� ����������" << endl;
			attempt++;
		}
		cout << "������ ���� �����: ";
		cin >> number;
	}
	cout << "�� ������� ����� � " << attempt << "-� ������" << endl;
	system("pause");
	return 0;
}