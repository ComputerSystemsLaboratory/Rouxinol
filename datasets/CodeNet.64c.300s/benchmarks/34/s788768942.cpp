#include <iostream>

using namespace std;

void trace(int n, int a[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << a[i];
		if (i < n - 1)
		{
			cout << " ";
		}
	}
	cout << endl;
}

void insertSort(int n, int a[])
{
	int i, j, key;
	for (i = 1; i < n; ++i)
	{
		key = a[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (a[j] > key)
			{
				a[j + 1] = a[j];
				continue;
			}
			break;
		}
		a[j + 1] = key;
		trace(n, a);
	}
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	trace(n, arr);
	insertSort(n, arr);
	return 0;
}