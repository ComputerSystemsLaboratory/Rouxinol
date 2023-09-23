#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cstdio>
int fib(int);
using namespace std;
int main()
{
	int n,ans,dp[1001];
	dp[0] = 1;
	dp[1] = 1;
	cin >> n;
	for (int i = 0; i <= n; i++){
		dp[i + 2] = dp[i] + dp[i + 1];
	}
	//ans = fib(n - 1);
	ans = dp[n];
	cout << ans << endl;
}
int fib(int n)
{
	if (n < 1)
		return 1;
	else
	{
		return fib(n - 1)+fib(n - 2);
	}
}