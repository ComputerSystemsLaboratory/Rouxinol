#include<iostream>
using namespace std;

int main(){
	int dp[50001];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++){
		dp[i] = i;
	}
	for(int i=1;i<=m;i++){
		int c;
		cin>>c;
		for(int j=0;j<=n;j++){
			if(j>=c){
				dp[j] = min(dp[j],1+dp[j-c]);
			}
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}