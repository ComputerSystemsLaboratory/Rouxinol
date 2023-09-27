#include<iostream>
using namespace std;
int main(){
	long long int dp[31];
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=30;i++)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	int n;
	while(cin>>n,n){
		long long int ans=dp[n];
		ans=(ans-1)/10+1;
		ans=(ans-1)/365+1;
		cout<<ans<<endl;
	}
}