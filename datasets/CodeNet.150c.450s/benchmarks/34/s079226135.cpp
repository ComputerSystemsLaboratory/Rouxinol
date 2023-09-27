#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int dp[31];
	int n;
	while(scanf("%d",&n),n) {
		memset(dp,0,sizeof(dp));
		dp[0]=1;
		for(int i=1;i<=n;i++) {
			dp[i]+=(i-1)>=0?dp[i-1]:0;
			dp[i]+=(i-2)>=0?dp[i-2]:0;
			dp[i]+=(i-3)>=0?dp[i-3]:0;
		}
		printf("%d\n",(int)ceil(ceil(dp[n]/10.0)/365.0));
	}
}