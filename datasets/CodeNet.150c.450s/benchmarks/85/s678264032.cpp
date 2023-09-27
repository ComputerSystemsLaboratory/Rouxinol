#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxx=2000000000;

int n;
int p[110],dp[110][110];

int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		dp[i][i]=0;
		cin>>p[i-1]>>p[i];
	}
	for(int len=2;len<=n;len++){
		for(int i=1;i<=n-len+1;i++){
			int j=i+len-1;
			dp[i][j]=maxx;
			for(int k=i;k<j;k++) dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
		}
	}
	cout<<dp[1][n]<<endl;
	return 0;
}
