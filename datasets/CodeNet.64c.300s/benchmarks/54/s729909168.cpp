#include <cstdio>
typedef long long ll;
int main() {
	int n; scanf("%d",&n);
	int r, num[n];
	for (int i=0; i<n-1; i++) scanf("%d",&num[i]);
	scanf("%d",&num[n-1]);
	ll dp[n-1][21];
	for (int i=0; i<n-1; i++) for (int j=0; j<21; j++) dp[i][j]=0;
	dp[0][num[0]]=1;
	for (int i=1; i<n-1; i++) {
		for (int j=0; j<21; j++) {
			if (j+num[i]<21) dp[i][j]+=dp[i-1][j+num[i]];
			if (j-num[i]>=0) dp[i][j]+=dp[i-1][j-num[i]];
		}
	}	
	printf("%lld\n",dp[n-2][num[n-1]]);
}