
#include<iostream>
using namespace std;


int main()
{
	int n, a[100], i;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		cout << a[n-1 - i];
		if (i == n-1)
		{
			break;
		}
		cout << " ";
	}
	cout << endl;

	return 0;
}