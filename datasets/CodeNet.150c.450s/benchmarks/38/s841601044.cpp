#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void bubbleSort(vector<int> &a)
{
	int tmp;
	for (int i = 0; i < a.size() - 1; i++)
	{
		for (int j = 0; j < a.size() - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(3, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
	}
	for (int i = 0; i < n; i++)
	{
		bubbleSort(a[i]);
		if (pow(a[i][0], 2) == pow(a[i][1], 2) + pow(a[i][2], 2))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
