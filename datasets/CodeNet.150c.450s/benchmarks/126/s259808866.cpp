#include <cstdio>
#include <cstring>

bool mp[16][16];
int dp[16][16];

int main() {
	int a,b,n;
	while(scanf("%d %d",&a,&b),a||b) {
		scanf("%d",&n);
		memset(mp,0,sizeof(mp));
		for(int i=0;i<n;i++) {
			int x,y;
			scanf("%d %d",&x,&y);
			mp[x-1][y-1]=true;
		}
		memset(dp,0,sizeof(dp));
		dp[0][0]=1;
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++) {
				if(mp[i][j]) continue;
				dp[i][j]+=!mp[i][j]&&(i-1)>=0?dp[i-1][j]:0;
				dp[i][j]+=!mp[i][j]&&(j-1)>=0?dp[i][j-1]:0;
			}
		}
		printf("%d\n",dp[a-1][b-1]);
	}
}