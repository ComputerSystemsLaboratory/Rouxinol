#include <iostream>
using namespace std;

int n,dp[35];

int func(){
	n+=2;
	dp[2]=1;
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	}
	int ans=((dp[n]-1)/10)/365+1;
	return ans;
}

int main(){
	while(1){
		cin>>n;
		if(n==0) break;
		cout<<func()<<endl;
	}
}