#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<double> a(n);
	double tmp;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				tmp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tmp;
				count++;
			}
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
