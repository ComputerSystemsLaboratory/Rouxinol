#include <cstdio>
#include <cstring>
long long dp[2][21];
int main() {
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	dp[0][m]=1;
	for(int i=1;i<n-1;i++) {
		scanf("%d",&m);
		for(int j=0;j<=20;j++) {
			if((j+m)<=20) {
				dp[i%2][j+m]+=dp[(i-1)%2][j];
			}
			if((j-m)>=0) {
				dp[i%2][j-m]+=dp[(i-1)%2][j];
			}
		}
		memset(dp+(i-1)%2,0,sizeof(long long)*21);
	}
	scanf("%d",&m);
	printf("%lld\n",dp[(n-2)%2][m]);
}