#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int theWinningNumber = rand() % 19 + 1;
	cout << "Введіть число від 0 до 20!" << endl; 
	int number, attempt = 1;
	cin >> number;
	while (number != theWinningNumber)
	{
		if (number < 1 or number > 20)
		{
			cout << "Невірне значення!" << endl;
			attempt++;
		}
		if (number > theWinningNumber)
		{
			cout << "Запропоноване число більше задуманого" << endl;
			attempt++;
		}
		if (number < theWinningNumber)
		{
			cout << "Запропоноване число менше задуманого" << endl;
			attempt++;
		}
		cout << "Введіть ваше число: ";
		cin >> number;
	}
	cout << "Ви вгадали число з " << attempt << "-ї спроби" << endl;
	system("pause");
	return 0;
}