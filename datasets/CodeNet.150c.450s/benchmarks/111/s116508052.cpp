#include<stdio.h>
long long int dp[101][21];
int main(void)
{
	int n;
	int s[101];
	int i,j,k;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&s[i]);
		
	}
	for(i=1;i<=n;i++){
		for(j=0;j<=20;j++){
			dp[i][j]=0;
		}
	}
	
	dp[1][s[1]]=1;
	for(i=1;i<n-1;i++){
		for(j=0;j<=20;j++){
			if(dp[i][j]!=0){
				if(s[i+1]+j<=20){
					dp[i+1][s[i+1]+j]+=dp[i][j];
				}
				if(j-s[i+1]>=0){
					dp[i+1][j-s[i+1]]+=dp[i][j];				
				}
			}
		}
	}
	printf("%lld\n",dp[n-1][s[n]]);
	return 0;
}