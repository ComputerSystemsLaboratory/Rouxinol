#include<iostream>
using namespace std;

int main()
{
	int minj, n, a[100], tmp, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		minj = i;
		for (int j = i; j < n; j++)
			if (a[j] < a[minj])
				minj = j;
		if (minj != i)
		{
			tmp = a[i];
			a[i] = a[minj];
			a[minj] = tmp;
			count++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i)
			cout << " ";
		cout << a[i];
	}
	cout << endl << count << endl;

	return 0;
}
