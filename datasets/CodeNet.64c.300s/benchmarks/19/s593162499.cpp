#include<stdio.h>
int main(){
	int a;
	while(1){
		scanf("%d",&a);
		if(a==0)return 0;
		long long int n[10000];
		for(int i=0;i<a;i++)scanf("%lld",n+i);
		long long int dp[10000];
		dp[0]=n[0];
		long long int max=dp[0];
		for(int i=1;i<a;i++){
			if(dp[i-1]>0)dp[i]=dp[i-1]+n[i];
			else dp[i]=n[i];
			if(max<dp[i])max=dp[i];
		}
		printf("%lld\n",max);
	}
}