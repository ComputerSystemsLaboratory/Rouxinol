#include<stdio.h>
long long dp[100][21];
int dat[100];
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",dat+i);
	}
	dp[0][dat[0]]=1;
	for(int i=1;i<a-1;i++){
		for(int j=0;j<=20;j++){
			if(j-dat[i]>=0)dp[i][j]+=dp[i-1][j-dat[i]];
			if(j+dat[i]<=20)dp[i][j]+=dp[i-1][j+dat[i]];
		}
	}
	//for(int i=0;i<=20;i++){
	//	printf("%lld\n",dp[a-2][i]);
	//}
	printf("%lld\n",dp[a-2][dat[a-1]]);
}