#include<bits/stdc++.h>
using namespace std;
const int M=20,N=50000;
int dp[N+5],a[M+5],n,m;
signed main(void){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
		scanf("%d",a+i);
	memset(dp,0x3f,sizeof(dp));
	dp[0]=0;
	for(int i=1;i<=m;i++)
		for(int j=0;j<=n;j++)
			if(j-a[i]>=0)
				dp[j]=min(dp[j],dp[j-a[i]]+1);
	printf("%d\n",dp[n]);
	return 0;
}