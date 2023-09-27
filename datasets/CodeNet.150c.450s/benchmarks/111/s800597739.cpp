#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[110];
	for(int i=0;i<n;i++){
		int u;
		cin>>u;
		a[i]=u;
	}
	long long dp[110][21]={0};
	dp[0][a[0]]=1;
	for(int i=0;i<n-1;i++){
	for(int j=0;j<21;j++){
	if(j+a[i+1]>-1 && 21>j+a[i+1]) dp[i+1][j+a[i+1]]=dp[i+1][j+a[i+1]]+dp[i][j];
	if(j-a[i+1]>-1 && 21>j-a[i+1]) dp[i+1][j-a[i+1]]=dp[i+1][j-a[i+1]]+dp[i][j];
	
	
	}
	}
	cout<<dp[n-2][a[n-1]]<<endl;
	return 0;
}