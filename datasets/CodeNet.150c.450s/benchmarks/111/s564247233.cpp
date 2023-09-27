#include<stdio.h>
int main()
{
	int i,j,n,a[100],ans;
	long long dp[100][21]={0};
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d",&a[i]);
		if(!i){
			dp[0][a[i]]=1;
		}
	}
	scanf("%d",&ans);
	for(i=0;i<n-2;i++){
		for(j=0;j<21;j++){
			if(dp[i][j]){
				if(j-a[i+1]>=0){
					dp[i+1][j-a[i+1]]+=dp[i][j];
				}
				if(j+a[i+1]<=20){
					dp[i+1][j+a[i+1]]+=dp[i][j];
				}
			}
		}
	}
	printf("%lld\n",dp[n-2][ans]);
	return 0;
}