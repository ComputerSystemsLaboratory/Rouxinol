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

int bubbleSort(int n, int a[])
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
				count++;
			}
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int n = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int count = bubbleSort(n, a);
	trace(n, a);
	cout << count << endl;
	return 0;
}