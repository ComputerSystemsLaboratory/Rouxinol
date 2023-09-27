#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,a[110]={0};
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	unsigned long long int dp[110][21]={{0}};
	dp[1][a[1]]=1;
	for(int i = 2; i < n; i++){
		for(int j = 0; j <= 20; j++){
			if(j + a[i] <= 20){
				dp[i][j] += dp[i-1][j+a[i]];
			}
			if(j - a[i] >= 0){
				dp[i][j] += dp[i-1][j-a[i]];
			}
		}
	}
	printf("%lld\n",dp[n-1][a[n]]);
	return 0;
}