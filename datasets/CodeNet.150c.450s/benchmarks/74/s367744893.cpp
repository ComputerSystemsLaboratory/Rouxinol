#include <iostream>
using namespace std;
int main(){
	int n,m,dp[50001]={0};
	while(cin>>n>>m){
	for(int i=0;i<=n;i++){
		dp[i]=i;
	}
	for(int i=0;i<m;i++){
		int c;
		cin>>c;
		for(int j=0;j<=n;j++){
			if(j>=c){
				dp[j]=min(dp[j],dp[j-c]+1);
			}
		}
	}
	cout<<dp[n]<<endl;
	/*
	for(int i=0;i<50;i++){
		cout<<dp[i]<<" ";
	}
	*/
	}
	return 0;
}