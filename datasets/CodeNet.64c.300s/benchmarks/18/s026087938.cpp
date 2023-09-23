#include <iostream>
using namespace std;
int main()
{
	int dp[31]={},n,ans;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<=30;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	while(cin>>n){
		if(n==0)break;
		ans=dp[n]/3650;
		ans+=dp[n]%3650!=0?1:0;
		cout<<ans<<endl;
	}
    return 0;
}