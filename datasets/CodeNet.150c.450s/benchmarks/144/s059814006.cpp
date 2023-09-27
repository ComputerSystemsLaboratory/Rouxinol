#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<long long int> > matrix1(n, vector<long long int>(m));
	vector<vector<long long int> > matrix2(m, vector<long long int>(l));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix1[i][j];
		}
	}
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < l; ++j)
		{
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < l; ++j)
		{
			long long int sum = 0;
			for (int k = 0; k < m; ++k)
			{
				sum += matrix1[i][k] * matrix2[k][j];
			}
			if (j == l - 1)
			{
				cout << sum;
			}
			else
			{
				cout << sum << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}