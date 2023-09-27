#include<stdio.h>
#include<string.h>
#include<algorithm>
int N,W,dp[105][20005],v[105],w[105],i;

int dfs(int d,int nw)
{
	int r;
	if(dp[d][nw]>=0)return dp[d][nw];
	if(d==N)r=0;
	else if(w[d]>nw)r=dfs(d+1,nw);
	else r=std::max(dfs(d+1,nw),dfs(d+1,nw-w[d])+v[d]);
	return dp[d][nw]=r;
}

int main()
{
	memset(dp,-1,sizeof(dp));
	scanf("%d%d",&N,&W);
	for(i=0;i<N;i++)scanf("%d%d",&v[i],&w[i]);
	printf("%d\n",dfs(0,W));
	return 0;
}