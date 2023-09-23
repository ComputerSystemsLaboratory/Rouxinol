#include<iostream>
#include<string>
using namespace std;
int dp[200][200];
int main(){
	int r,c;
	cin>>r>>c;
	for(int i=0;i<=r;i++)
		dp[i][c]=0;
	for(int i=0;i<c;i++)
		dp[r][i]=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>dp[i][j];
			dp[i][c]+=dp[i][j];
			dp[r][j]+=dp[i][j];
			dp[r][c]+=dp[i][j];
		}
	}
	for(int i=0;i<=r;i++){
		for(int j=0;j<c;j++)
			cout<<dp[i][j]<<" ";
		cout<<dp[i][c]<<endl;
	}
	return 0;
}