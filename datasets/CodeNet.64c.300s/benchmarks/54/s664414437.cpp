#include<stdio.h>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	long long int dp[21][101];
	int  n,m,i,k;
	scanf("%d",&n);
	for(i=0;i<21;i++){
		for(k=1;k<n;k++) dp[i][k]=0;
	}
	scanf("%d",&m);
	dp[m][1]=1;
	for(i=2;i<n;i++){
		scanf("%d",&m);
		for(k=0;k<21;k++){
			if(k-m>=0 && dp[k][i-1]>0)	dp[k-m][i]+=dp[k][i-1];
			if(k+m<21 && dp[k][i-1]>0)	dp[k+m][i]+=dp[k][i-1];
		}
	}
	scanf("%d",&m);
	printf("%lld\n",dp[m][n-1]);
	return 0;
}