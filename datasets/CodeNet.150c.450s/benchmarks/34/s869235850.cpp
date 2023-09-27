#include<iostream>
using namespace std;

int main()
{
	int n;
	int year;
	while (cin >> n)
	{
		if (n == 0) break;

		int a[30];

		a[0] = 1;
		a[1] = 2;
		a[2] = 4;

		for (int i = 3; i < n; i++)
		{
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		}

		year = a[n - 1] / 3650;
		if (a[n - 1] % 3650 > 0)
		{
			year += 1;
		}

		cout << year << endl;

	}
	
	return 0;
}