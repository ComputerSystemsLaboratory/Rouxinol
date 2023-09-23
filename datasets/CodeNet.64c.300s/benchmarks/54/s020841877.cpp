#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
using namespace std;

int a[100];
long long int dp[100][21];
int n;

long long int rec(int i, int j) //i番目の
{
	if (j < 0 || 20 < j)
	{
		return 0;
	}

	if (i == n - 2)
	{
		if (j == a[n - 1])
		{
			return 1;
		}
		return 0;
	}

	if (dp[i][j] > -1)
	{
		return dp[i][j];
	}
	
	dp[i][j] = rec(i + 1, j + a[i + 1]) + rec(i + 1, j - a[i + 1]);
	return dp[i][j];
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << rec(0, a[0]) << endl;
	return 0;
}