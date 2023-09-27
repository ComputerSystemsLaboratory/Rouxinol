#include<iostream>
#include<vector>
using namespace std;



int main(){
	unsigned long int dp[40];
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<40;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	int n;
	while(cin>>n,n){
		int ans=dp[n]/10/365 +1;
		cout<<ans<<endl;
	}
}