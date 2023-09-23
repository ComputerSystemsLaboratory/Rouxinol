#include <iostream>
using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 9; j >= i; j--)
		{
			if (a[i] > a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << a[9 - i] << endl;
	}
	return 0;
}