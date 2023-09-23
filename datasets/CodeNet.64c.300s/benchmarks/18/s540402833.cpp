#include <cstdio>
typedef long long ll;
int main() {
	int n;
	ll dp[30];
	dp[0]=1; dp[1]=2; dp[2]=4;
	for (int i=3; i<30; i++) dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	while (scanf("%d",&n)) {
		if (n==0) break;
		ll day,year;
		if (dp[n-1]%10!=0) day=dp[n-1]/10+1;
		else day=dp[n-1]/10;
		if (day%365!=0) year=day/365+1;
		else year=day/365;
		printf("%lld\n",year);
	}
}