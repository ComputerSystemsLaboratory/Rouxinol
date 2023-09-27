#include<iostream>
using namespace std;

int main()
{
	int flag = 1, tmp, n, a[100], count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (flag)
	{
		flag = 0;
		for (int i = n - 1; i > 0; i--)
			if (a[i] < a[i - 1])
			{
				tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;
				count++;
				flag = 1;
			}
	}
	for (int i = 0; i < n; i++)
	{
		if (i)
			cout << " ";
		cout << a[i];
	}
	cout << endl << count << endl;

	return 0;
}
