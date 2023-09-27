#include <stdio.h>
#define INF 10000000
#define MIN(a,b) ((a>b)?(b):(a))
#define MAX(a,b) ((a>b)?(a):(b))

int main(void){
	int N,W;
	int v[1001],w[1001];
	int dp[10001];
	int i,j,k;

	scanf("%d%d",&N,&W);
	for(i=1;i<=N;i++) scanf("%d%d",v+i,w+i);


	for(i=0;i<=W;i++) dp[i]=0;
	dp[0]=0;

	for(i=1;i<=N;i++){
		for(j=W;j>=0;j--){
			if(j-w[i]>=0) dp[j]=MAX(dp[j],dp[j-w[i]]+v[i]);
		}
	}

	printf("%d\n",dp[W]);
	return 0;
}