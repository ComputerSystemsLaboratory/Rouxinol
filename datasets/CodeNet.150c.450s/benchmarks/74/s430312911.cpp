#include<iostream>
#include<string>

using namespace std;

int dp[20][50001];
int main(){
	int n,m;
	int c[20];
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>c[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n+1;j++){
			if(i==0)
				dp[0][j]=j;
			else if(j<c[i])
				dp[i][j]=dp[i-1][j];
			else{
				if(dp[i-1][j]<dp[i][j-c[i]]+1)
					dp[i][j]=dp[i-1][j];
				if(dp[i][j-c[i]]+1<=dp[i-1][j])
					dp[i][j]=dp[i][j-c[i]]+1;
			}
		}
	}
	cout<<dp[m-1][n]<<endl;
	return 0;
}