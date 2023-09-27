#include<stdio.h>
long long dp[2][21];
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<=20;i++)dp[1][i]=0;
	int x;
	scanf("%d",&x);
	dp[1][x]=1;
	for(i=0;i<n-2;i++){
		int x;
		scanf("%d",&x);
		for(j=0;j<=20;j++){
			dp[i%2][j]=0;
			if(j+x<=20)dp[i%2][j]+=dp[(i+1)%2][j+x];
			if(j-x>=0)dp[i%2][j]+=dp[(i+1)%2][j-x];
		}
	}
	scanf("%d",&x);
	printf("%lld\n",dp[(n-1)%2][x]);
	return 0;
}