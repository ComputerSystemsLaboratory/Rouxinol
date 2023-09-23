#include<iostream>

using namespace std;

int a[100], n;

void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int v = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > v)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = v;
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1) { cout << a[j] << endl; }
			else { cout << a[j] << " "; }
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[n - 1] << endl;
	insertionSort(a, n);
    return 0;
}