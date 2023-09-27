#pragma GCC optimize("Ofast")
#include<stdio.h>
#include<algorithm>
using namespace std;
int r[105],c[105],dp[105][105]={0};
int main(){
	int i,j,k,n,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&r[i],&c[i]);
	for(i=0;i<n-1;i++)
		dp[i][i+1]=r[i]*c[i]*c[i+1];
	for(len=3;len<=n;len++){
		for(i=0;i<n-len+1;i++){
			j=i+len-1;
			dp[i][j]=2147483647;
			for(k=i;k<j;k++){
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+r[i]*c[k]*c[j]);
			}
		}
	}
	printf("%d\n",dp[0][n-1]);
}

