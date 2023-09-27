#include<iostream>
using namespace std;
int main()
{
	int n, a[100], tmp, j;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0 && tmp < a[j]; j--)
			a[j + 1] = a[j];
		a[j + 1] = tmp;
		for (int j = 0; j < n; j++) {
			if (j)
				cout << " ";
			cout << a[j];
		}
		cout << endl;
	}
	return 0;
}
