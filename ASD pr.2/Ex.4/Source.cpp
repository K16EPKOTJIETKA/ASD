#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int size1, size2;
	cout << "������ ����� ������� ������: ";
	cin >> size1;
	cout << "������ ����� ������� ������: ";
	cin >> size2;
	if (size1 < 1 or size2 < 1)
	{
		cout << "�������! ������ ������ ������ ���� �� ����� ������!" << endl;
	}
	else
	{
		int* firstArray = new int[size1];
		int* secondArray = new int[size2];
		int* thirdArray = new int[size1 + size2];
		cout << "������ �����: " << endl;
		for (int i = 0; i < size1; i++)
		{
			firstArray[i] = rand() % 200 - 100;
			cout << firstArray[i] << " ";
			thirdArray[i] = firstArray[i];
		}
		cout << endl;
		cout << "������ �����: " << endl;
		for (int i = 0; i < size2; i++)
		{
			secondArray[i] = rand() % 200 - 100;
			cout << secondArray[i] << " ";
			thirdArray[size1 + i] = secondArray[i];
		}
		cout << endl;
		cout << "����� �����: " << endl;
		for (int j = 0; j < size1 + size2; j++)
		{
			for (int i = 0; i < size1 + size2 - 1; i++)
			{
				if (thirdArray[i] > thirdArray[i + 1])
				{
					int buffer = thirdArray[i];
					thirdArray[i] = thirdArray[i + 1];
					thirdArray[i + 1] = buffer;
				}
			}
		}
		for (int i = 0; i < size1 + size2; i++)
		{
			cout << thirdArray[i] << " ";
		}
		cout << endl;
		delete[] firstArray, secondArray, thirdArray;
	}
	system("pause");
	return 0;
}