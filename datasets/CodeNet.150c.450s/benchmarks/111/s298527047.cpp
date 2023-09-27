#include<stdio.h>
long long int dp[1001][1001];
int main(void)
{
	long long int N,a[1001],i,j;
	scanf("%lld",&N);
	for(i=1;i<=N;i++){
		scanf("%lld",&a[i]);
	}
	for(i=1;i<N;i++){
		for(j=0;j<=20;j++){
			dp[i][j]=0;
		}
	}
	dp[1][a[1]]=1;
	for(i=1;i<N;i++){
		for(j=0;j<=20;j++){
			if(j+a[i+1]<=20){
				dp[i+1][j+a[i+1]]+=dp[i][j];
			}
			if(j-a[i+1]>=0){
				dp[i+1][j-a[i+1]]+=dp[i][j];
			}
		}
	}
	/*for(i=1;i<N;i++){
		for(j=0;j<=20;j++){
			printf("%d ",dp[i][j]);
		}
		printf("\n");
	}*/
	for(i=0;i<=20;i++){
		if(i==a[N]){
			printf("%lld\n",dp[N-1][i]);
			break;
		}
	}
	return 0;
}