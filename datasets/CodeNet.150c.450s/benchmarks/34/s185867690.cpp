#include<iostream>
using namespace std;


int main(){
	int dp[31]={0};
	dp[0]=dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=30;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	int n;
	while(cin>>n&&n){
		cout<<(dp[n]+3649)/3650<<endl;
	}
	return 0;
}