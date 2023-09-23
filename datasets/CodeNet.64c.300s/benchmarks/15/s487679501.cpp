#include<iostream>

using namespace std;

int main()
{
	int n, a[100], i, j, count = 0, v;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1 ; j < n; j++)
		{
			if (a[j] < a[min])min = j;
		}
		if (i != min)
		{
			v = a[i];
			a[i] = a[min];
			a[min] = v;
			count++;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (i)cout << " ";
		cout << a[i];
	}
	cout << endl << count << endl;
    return 0;
}