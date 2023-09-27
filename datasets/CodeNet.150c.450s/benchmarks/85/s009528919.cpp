#include<bits/stdc++.h>

using namespace std;

struct Matrix
{
	int r,c;
};

int main()
{
	Matrix Mat[100]; 
	int n,dp[100][100];
	memset(dp,0,sizeof(dp));
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d%d",&Mat[i].r,&Mat[i].c);
	for(int i=1;i<n;i++)
		for(int j=0;i+j<n;j++)
		{
			dp[j][i+j]=INT_MAX;
			for(int k=j;k<i+j;k++)
				dp[j][i+j]=min(dp[j][i+j],dp[j][k]+dp[k+1][i+j]+Mat[j].r*Mat[i+j].c*Mat[k].c);
		}
	printf("%d\n",dp[0][n-1]);
	return 0;
}