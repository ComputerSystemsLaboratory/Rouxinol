#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int n, a[4][3][100] = { 0 }, b, c, d, e, i, j, k;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> b >> c >> d >> e;
		a[b - 1][c - 1][d - 1] += e;
	}
	for(k = 0;k < 4;k++)
	{ 
		if (k) cout << "####################" << endl;
		for (j = 0; j < 3; j++)
		{
			for (i = 0; i < 10; i++)
			{
				if (a[k][j][i] > 9)a[k][j][i] = 9;
				else if (a[k][j][i] < 0)a[k][j][i] = 0;
				cout << " " << a[k][j][i];
			}
			cout << endl;
		}
	}
	return 0;
}