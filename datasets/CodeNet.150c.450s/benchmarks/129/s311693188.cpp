#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>

using namespace std;

void solve()
{
	int r, c;
	cin >> r >> c;
	vector<vector<int> > matrix(r, vector<int>(c));
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < r; ++i)
	{
		int sum = 0;
		for (int j = 0; j < c; ++j)
		{
			cout << matrix[i][j] << " ";
			sum += matrix[i][j];
		}
		cout << sum << endl;
	}
	int all = 0;
	for (int i = 0; i < c; ++i)
	{
		int sum = 0;
		for (int j = 0; j < r; ++j)
		{
			sum += matrix[j][i];
		}
		cout << sum << " ";
		all += sum;
	}
	cout << all << endl;
}

int main()
{
	solve();
	return(0);
}