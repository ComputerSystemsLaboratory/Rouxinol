#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > matrix(n, vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	vector<int> vec(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = 0; j < m; ++j)
		{
			sum += matrix[i][j] * vec[j];
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}