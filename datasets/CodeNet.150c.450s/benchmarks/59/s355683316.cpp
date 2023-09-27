#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &a)
{
	for (int k = 0; k < a.size(); k++)
	{
		cout << a[k];
		if (k == a.size() - 1)
		{
			cout << endl;
		}
		else
		{
			cout << ' ';
		}
	}
}

void insertionSort(vector<int> &a)
{
	int j, key;
	for (int i = 1; i < a.size(); i++)
	{
		printArray(a);
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
	printArray(a);
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	insertionSort(a);
	return 0;
}
