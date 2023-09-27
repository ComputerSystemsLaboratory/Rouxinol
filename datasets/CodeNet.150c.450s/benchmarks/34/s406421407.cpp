#include<stdio.h>
long long int dp[30];
int main(){
	dp[0]=1;
	dp[1]=2;
	dp[2]=4;
	for(int i=3;i<30;i++)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	int a;
	while(scanf("%d",&a),a)printf("%d\n",((dp[a-1]+9)/10+364)/365);
}