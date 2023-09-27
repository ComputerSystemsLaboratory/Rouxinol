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

int selectionSort(int n, int a[])
{
	int min = 0;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		min = i;
		for (int j = i; j < n; ++j)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			swap(a[i], a[min]);
			count++;
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
	int count = selectionSort(n, a);
	trace(n, a);
	cout << count << endl;
	return 0;
}