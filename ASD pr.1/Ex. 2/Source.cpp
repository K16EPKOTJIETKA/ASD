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
	int min = num[0];
	for (int i = 0; i < 3; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
		}
	}
	cout << "Minimum number: " << min << endl;
	system("pause");
	return 0;
}