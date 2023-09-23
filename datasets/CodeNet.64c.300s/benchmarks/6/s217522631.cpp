#include<iostream>

using namespace std;

int main()
{
	const int B = 4;
	const int F = 3;
	const int R = 10;

	int a[B][F][R];
	for (int i = 0; i < B; i++)
		for (int j = 0; j < F; j++)
			for (int k = 0; k < R; k++)
				a[i][j][k] = 0;

	int n;
	cin >> n;

	int b, r, f, v;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}

	for (int i = 0; i < B; i++)
	{
		if(i != 0)
			cout << "####################" << endl;

		for (int j = 0; j < F; j++)
		{
			for (int k = 0; k < R; k++)
			{
					cout << " " << a[i][j][k];
			}
			cout << endl;
		}

	}
}