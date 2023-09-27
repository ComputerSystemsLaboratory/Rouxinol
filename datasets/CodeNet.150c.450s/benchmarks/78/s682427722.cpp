#include<iostream>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX 1004732

int calc(int n) { return n*(n + 1)*(n + 2) / 6; }
int p[200];
int p1[200];
//int dp[MAX] = { 0 };
//int dp1[MAX] = { 0 };

int func(int n, int P[], int DP[])
{
	if (n <= 0)return MAX;
	if (DP[n] != 0)return DP[n];
	else
	{
		int min_t = MAX;
		int i = 0;
		while (1)
		{
			if (P[i] <= n && n <= P[i + 1])break;
			if (P[i] == 1004731)
			{
				i--;
				break;
			}
			i++;
		}
		for (int t = i; t>0; t--)
		{
			int temp = func(n - P[t], P, DP);
			if (min_t > temp + 1)
			{
				min_t = temp + 1;
			}
		}
		DP[n] = min_t;
		return DP[n];
	}
}

int main()
{
	int *dp, *dp1;
	dp = new int[MAX];
	dp1 = new int[MAX];
	REP(i, MAX)
	{
		dp[i] = 0;
		dp1[i] = 0;
	}
	int index = 1;
	FOR(i, 1, 200)
	{
		int temp = calc(i);
		if (temp > 1004731)break;
		p[i] = temp;
		dp[p[i]] = 1;
		if (temp % 2 == 1)
		{
			p1[index] = temp;
			dp1[p1[index]] = 1;
			index++;
		}
	}
	while (1)
	{
		int N;
		cin >> N;
		if (N == 0)break;
		cout << func(N, p, dp) << " " << func(N, p1, dp1) << endl;
	}
	delete[] dp;
	delete[] dp1;
}