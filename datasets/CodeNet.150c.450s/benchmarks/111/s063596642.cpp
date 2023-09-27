#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

#define MAX	110

long long int DP[MAX][MAX];
long long int target;
long long int input[MAX];
long long int n;
long long int dfs_end;


long long int dfs(int now , int sum)
{
	if (now == dfs_end)
	{
		if (sum == target)
		{
			return 1;
		}
		return 0;
	}
	if (sum > 20 || 0 > sum)
	{
		return 0;
	}
	if (DP[now][sum] != 0)
	{
		return DP[now][sum];
	}

	DP[now][sum] += dfs(now + 1 , sum + input[now]);
	DP[now][sum] += dfs(now + 1 , sum - input[now]);

	return DP[now][sum];
}



int main()
{
	cin >> n;
	for (int i = 0; i < MAX; i++)
	{
		for (int j = 0; j < MAX; j++)
		{
			DP[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}

	target = input[n - 1];
	dfs_end = n - 1;

	//int i = 0;
	//while (input[i] == 0)
	//{
	//	i++;
	//}
	//
	//DP[0][0] = dfs(i , 0);
	DP[0][0] = dfs(1 , input[0]);
	
	printf("%lld" , DP[0][0]);
	puts("");

	return 0;
}