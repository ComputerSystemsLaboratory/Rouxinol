#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

long long int dp[21];
long long int dpw[21];

int main()
{
	long long int n;
	scanf("%lld",&n);
	for(int i = 0; i <= 20; i++)
	{
		dp[i] = 0;
	}
	long long int ww;
	scanf("%lld",&ww);
	dp[ww] = 1;
	for(int i = 0; i < n - 2; i++)
	{
		for(int j = 0; j <= 20; j++)
		{
			dpw[j] = 0;
		}
		long long int w;
		scanf("%lld",&w);
		for(long long int j = 0; j <= 20; j++)
		{
			long long int t = j + w;
			if(w <= 20)
			{
				dpw[t] += dp[j];
			}
			long long int h = j - w;
			if(h >= 0)
			{
				dpw[h] += dp[j];
			}
		}
		for(long long int j = 0; j <= 20; j++)
		{
			dp[j] = dpw[j];
		}
	}
	scanf("%lld",&ww);
	printf("%lld\n",dp[ww]);
	return 0;
}