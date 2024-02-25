#include <iostream>
using namespace std;

int main()
{
	int num[3];
	cout << "Input 3 numbers: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}
	cout << "Numbers in interval [1; 6]: ";
	for (int i = 0; i < 3; i++)
	{
		if (num[i] < 7 and num[i] > 0)
		{
			cout << num[i] << " ";
		}
	}
	cout << endl;
	system("pause");
	return 0;
}