#include <cstdio>
#include <cstring>
int a,b;
int dp[16][16];
bool bad[16][16];
int main (int argc, char const* argv[])
{
	int a,b,n;
	while(scanf("%d %d",&a,&b),a) {
		memset(dp,0,sizeof(dp));
		memset(bad,0,sizeof(bad));
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			int x,y;
			scanf("%d %d",&x,&y);
			bad[x-1][y-1]=true;
		}
		if(bad[0][0]){printf("0\n");continue;}
		dp[0][0]=1;
		for(int i=0;i<a;i++) {
			for(int j=0;j<b;j++) {
				if(bad[i][j])continue;
				if(i>0&&!bad[i-1][j])dp[i][j]+=dp[i-1][j];
				if(j>0&&!bad[i][j-1])dp[i][j]+=dp[i][j-1];
			}
		}
		printf("%d\n",dp[a-1][b-1]);
	}
	return 0;
}