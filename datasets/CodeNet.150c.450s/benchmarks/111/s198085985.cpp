#include <cstdio>
#include <cstring>

int num[100];long long int dp[99][21];

int main() {
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&num[i]);
	memset(dp,0,sizeof(dp));
	dp[0][num[0]]=1;
	for(int i=1;i<n-1;i++) {
		for(int j=0;j<=20;j++) {
			int tmp1=j-num[i],tmp2=j+num[i];
			if(tmp1>=0&&dp[i-1][tmp1]) dp[i][j]+=dp[i-1][tmp1];
			if(tmp2<=20&&dp[i-1][tmp2]) dp[i][j]+=dp[i-1][tmp2];
		}
	}
	printf("%lld\n",dp[n-2][num[n-1]]);
}