#include<iostream>
#include<algorithm>
using namespace std;
int dp[30][60000];
int coins[30];
const int INF=10000000;

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)cin>>coins[i];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++)dp[i][j]=INF;
	}
	dp[0][0]=0;
	
	for(int i=1;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(j-coins[i-1]<0)dp[i][j]=dp[i-1][j];//i-1?????????????????????????????????????????????
			else dp[i][j]=min(dp[i-1][j],dp[i][j-coins[i-1]]+1);
		}
	}
	cout<<dp[m][n]<<endl;
	return 0;
}