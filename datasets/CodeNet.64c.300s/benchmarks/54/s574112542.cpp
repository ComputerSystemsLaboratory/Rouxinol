#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
#define __int64 long long
__int64 dp[110][21];
int ta[110],t;
const int INF=0;
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++)cin>>ta[i];
cin>>t;
for(int i=0;i<110;i++)for(int j=0;j<21;j++)dp[i][j]=INF;
dp[1][ta[1]]=1;
for(int i=2;i<=n-1;i++){
	for(int j=0;j<=20;j++){
	if(j-ta[i]>=0&&dp[i-1][j-ta[i]]!=INF)dp[i][j]+=dp[i-1][j-ta[i]];
	if(j+ta[i]<=20&&dp[i-1][j+ta[i]]!=INF)dp[i][j]+=dp[i-1][j+ta[i]];
	}
}
cout<<dp[n-1][t]<<endl;
return 0;
}