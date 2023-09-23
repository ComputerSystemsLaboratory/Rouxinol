#include<stdio.h>
long long dp[21][100];
int main(){
	int m,n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<21;i++)for(j=0;j<n;j++)dp[i][j]=0;
	for(i=0;i<n-1;i++){
		scanf("%d",&m);
		if(i==0){
			dp[m][1]=1;
			continue;
		}
		for(j=0;j<=20;j++){
			if(dp[j][i]!=0){
				if(j+m<=20){
					dp[j+m][i+1]+=dp[j][i];
				}
				if(j-m>=0){
					dp[j-m][i+1]+=dp[j][i];
				}
			}
		}
	}
	scanf("%d",&m);
	printf("%lld\n",dp[m][n-1]);
	return 0;
}