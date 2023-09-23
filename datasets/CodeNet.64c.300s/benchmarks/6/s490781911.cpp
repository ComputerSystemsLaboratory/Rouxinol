#include<iostream>
using namespace std;
int main()
{
	int a[5][4][11] = { {{}} };
	int i, j, k, b, f, r, v, n;
	cin >> n;
	while (n--)
	{
		cin >> b >> f >> r >> v;
		a[b][f][r] += v;
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			for (k = 1; k <= 10; k++)
			{
				cout << " " << a[i][j][k];
			}
			
			cout << endl;
		}
		if (i != 4)cout << "####################" << endl;
	}
	return 0;
}
