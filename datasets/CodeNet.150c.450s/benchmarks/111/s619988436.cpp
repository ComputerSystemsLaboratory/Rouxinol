#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n,a;
	long long int dp[100][21];
	scanf("%d",&n);
	scanf("%d",&a);
	for(int i=0;i<21;i++)dp[0][i]=0;
	dp[0][a]=1;
	for(int i=1;i<n-1;i++){
		scanf("%d",&a);
		for(int j=0;j<21;j++){
			dp[i][j]=0;
			if(j>=a)dp[i][j]+=dp[i-1][j-a];
			if(j+a<=20)dp[i][j]+=dp[i-1][j+a];
		}
	}
	scanf("%d",&a);
	printf("%lld\n",dp[n-2][a]);
}