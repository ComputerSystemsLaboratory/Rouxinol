#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<algorithm>
#include<functional>
#define ll long long
#define inf  999999999
#define pa pair<int,int>
using namespace std;


int main(){
int n,w;
int va[110],we[110];
cin>>n>>w;
for(int i=0;i<n;i++) cin>>va[i]>>we[i];
int dp[10010]={0};
for(int i=0;i<n;i++){
for(int j=w;j>=0;j--){
if(j-we[i]>=0) dp[j]=max(dp[j-we[i]]+va[i],dp[j]);
}
}


cout<<dp[w]<<endl;
return 0;
}