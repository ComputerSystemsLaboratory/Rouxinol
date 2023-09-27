#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  1999999999
#define pa pair<int,int>
using namespace std;



int main(){
//cout<<"1"<<endl;
string s,t;
cin>>s>>t;
int ls=s.length(),lt=t.length();
//cout<<ls<<endl;
//cout<<s<<endl;


int dp[1010][1010];
for(int i=0;i<=max(ls,lt);i++){
dp[i][0]=i;
dp[0][i]=i;
}

for(int i=1;i<=ls;i++){
for(int j=1;j<=lt;j++){
if(s[i-1]==t[j-1]) dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]);
else dp[i][j]=min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+1);
//cout<<dp[i][j]<<endl;
}
}
cout<<dp[ls][lt]<<endl;



return 0;
}