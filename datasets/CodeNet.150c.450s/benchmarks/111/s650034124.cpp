#include <bits/stdc++.h>
using namespace std;

int n;
int a[101];
long long dp[101][21];
// dp[ ??????????????°?????§?¨????????????? ][ ??? ]

long long search(int i, int sum)
{
	if (sum < 0 || sum > 20) return (0);
	
	long long &res = dp[i][sum];
	
	if (res != -1) return (res);
	
	if (i == n){
		if (sum == a[i]) return (res = 1);
		else return (res = 0);
	}
	
	long long add = search(i + 1, sum + a[i]);
	long long sub = search(i + 1, sum - a[i]);
	
	return (res = add + sub);
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	memset(dp, -1, sizeof(dp));
	
	printf("%lld\n", search(1, a[0]));
	
	return 0;
}