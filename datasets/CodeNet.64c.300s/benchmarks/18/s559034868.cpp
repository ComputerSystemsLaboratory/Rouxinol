#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int main(){
int n, dp[50];
while(cin>>n,n!=0){
fill(dp,dp+50,0);
dp[0]=0,dp[1]=1,dp[2]=1,dp[3]=2;
for(int i=3;i<=n+1;i++)dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
int ans=dp[n+1];
ans/=3650;
if(dp[n]%3650!=0)ans++;
cout<<ans<<endl;
}
return 0;
}