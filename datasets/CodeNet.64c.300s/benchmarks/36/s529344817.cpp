#include <iostream>

using namespace std;

void solve()
{
	int a[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = i + 1; j < 3; ++j)
		{
			if (a[j] < a[i])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		cout << a[i] << " ";
	}
	cout << a[2] << endl;
}

int main()
{
	solve();
	return(0);
}