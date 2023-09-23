#include<stdio.h>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int main(void){
	int n,j,i,k;
	int su[10000],max;
	long long int dp[1000][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&su[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<=20;j++){
			dp[i][j]=0;
		}
	}
	dp[0][su[0]]=1;
	for(i=1;i<n-1;i++){
		for(j=0;j<=20;j++){
			dp[i][j-su[i]]+=dp[i-1][j];
			dp[i][j+su[i]]+=dp[i-1][j];
		}
	}
	/*for(i=0;i<n-1;i++){
		for(j=0;j<=20;j++){
			printf("%lld ",dp[i][j]);
		}
		printf("\n");
		printf("%d",su[i]);
		printf("\n");
		printf("%d\n",i);
		//printf("\n");
	}*/
	printf("%lld\n",dp[n-2][su[n-1]]);
	return 0;
}