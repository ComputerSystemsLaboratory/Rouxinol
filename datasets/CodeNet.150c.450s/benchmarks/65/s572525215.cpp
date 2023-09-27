#include<iostream>
using namespace std;

int main()
{
	int n, flag = 1, minj;
	char c[36][5], alt[36][3] = { }, tmp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
		alt[i][0] = c[i][0];
		alt[i][1] = c[i][1];
	}
	for (int i = 0; i < n; i++)
		for (int j = n - 1; j > i; j--)
			if (alt[j - 1][1] > alt[j][1])
			{
				tmp = alt[j - 1][1];
				alt[j - 1][1] = alt[j][1];
				alt[j][1] = tmp;
				tmp = alt[j - 1][0];
				alt[j - 1][0] = alt[j][0];
				alt[j][0] = tmp;
			}
	for (int i = 0; i < n; i++)
	{
		if (i)
			cout << " ";
		cout << alt[i];
	}
	cout << endl << "Stable" << endl;

	for (int i = 0; i < n; i++)
	{
		minj = i;
		for (int j = i; j < n; j++)
			if (c[minj][1] > c[j][1])
				minj = j;
		for (int j = i + 1; j < minj; j++)
			if (c[j][1] == c[i][1])
				flag = 0;
		tmp = c[minj][0];
		c[minj][0] = c[i][0];
		c[i][0] = tmp;
		tmp = c[minj][1];
		c[minj][1] = c[i][1];
		c[i][1] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		if (i)
			cout << " ";
		cout << c[i];
	}
	if (flag)
		cout << endl << "Stable" << endl;
	else
		cout << endl << "Not stable" << endl;

	return 0;
}
