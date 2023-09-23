#include <cstdio>
#include <cstring>
long long int dp[99][21];
int ary[100];
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&ary[i]);
	dp[0][ary[0]]=1;
	for(int i=1;i<(n-1);i++) {
		for(int j=0;j<=20;j++) {
			if((j-ary[i])>=0) dp[i][j]+=dp[i-1][j-ary[i]];
			if((j+ary[i])<=20)dp[i][j]+=dp[i-1][j+ary[i]];
		}
	}
	printf("%lld\n",dp[n-2][ary[n-1]]);
}