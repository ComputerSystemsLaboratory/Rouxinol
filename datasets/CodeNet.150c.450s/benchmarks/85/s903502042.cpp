#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
int N;
int r[105],c[105];
ll dp[105][105]={0};

void dbg()
{
	for(int i=0;i<N;i++,puts(""))
		for(int j=0;j<N;j++)
			printf("%7d ",dp[i][j]);
}

int main()
{
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d%d",&r[i],&c[i]);
	for(int i=0;i<N;i++)dp[i][i]=0;
	for(int l=1;l<N;l++)
		for(int i=0;i<N-l;i++)
		{
			int j=i+l;
			dp[i][j]=1e15;
			for(int k=i;k<j;k++)
			{
				//printf("%d %d %d %d\n",i,j,i+l,k);
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+r[i]*c[k]*c[j]);
			}
		}
	//dbg();
	printf("%lld\n",dp[0][N-1]);
	return 0;
}