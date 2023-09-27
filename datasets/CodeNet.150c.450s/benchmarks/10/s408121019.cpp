#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<vector<int>> > v(5, vector<vector<int>>(4, vector<int>(11, 0)));
	for (int i = 0; i < n; i++)
	{
		int a[3];
		int t;
		cin >> a[0] >> a[1] >> a[2];
		cin >> t;
		v[a[0]][a[1]][a[2]] += t;
	}
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			cout << " ";
			for (int k = 1; k < 11; k++)
			{
				string s = (k == 11 - 1) ? "\n" : " ";

				cout << v[i][j][k] << s;
			}
		}
		if (i != 4)
		{
			cout << "####################" << endl;
		}
	}
	return 0;
}