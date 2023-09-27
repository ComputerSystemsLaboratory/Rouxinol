#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<double> a(n);
	double tmp;
	int min;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = a[i];
			a[i] = a[min];
			a[min] = tmp;
			count++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
		if (i == n - 1)
		{
			cout << endl;
		}
		else
		{
			cout << " ";
		}
	}
	cout << count << endl;
}
