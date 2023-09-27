#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
typedef long long ll;
ll dp[100][21];

int main(){
	int N;
	scanf("%d",&N);
	int d[100];
	for(int i=0;i<N;i++) scanf("%d",&d[i]);
	dp[1][d[0]]=1;
	for(int i=2;i<N;i++){
		for(int j=0;j<=20;j++){
			if(0<=j+d[i-1]&&j+d[i-1]<=20) dp[i][j]+=dp[i-1][j+d[i-1]];
			if(0<=j-d[i-1]&&j-d[i-1]<=20) dp[i][j]+=dp[i-1][j-d[i-1]];
		}
	}
	printf("%lld\n",dp[N-1][d[N-1]]);
}