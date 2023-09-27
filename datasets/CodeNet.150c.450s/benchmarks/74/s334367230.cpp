#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;

int n,m,inf=10000,num[25],dp[25][50005];

int func(){
	fill(dp[0],dp[0]+n+1,inf);
	dp[0][0]=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<=n;j++){
			if(j<num[i]) dp[i+1][j]=dp[i][j];
			else dp[i+1][j]=min(dp[i][j],dp[i+1][j-num[i]]+1);
		}
	}
	return dp[m][n];
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>num[i];
	}
	cout<<func()<<endl;
}