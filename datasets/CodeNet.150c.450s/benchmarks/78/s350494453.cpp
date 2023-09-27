#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 1e9
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int dp[1000010]={};
  int dp2[1000010]={};
  for(int i=1;i<=1000000;i++){dp[i]=INF;dp2[i]=INF;}
  vector<ll> gu;
  vector<ll> ki;
  ll cnt=1;
  while(1){
    if((cnt*(cnt+1)*(cnt+2)/6)>1000000)break;
    if(((cnt*(cnt+1)*(cnt+2))/6)%2){ki.pb(cnt*(cnt+1)*(cnt+2)/6);dp[ki[ki.size()-1]]=1;dp2[ki[ki.size()-1]]=1;}
    else {gu.pb(cnt*(cnt+1)*(cnt+2)/6);dp[gu[gu.size()-1]]=1;}
    cnt++;
  }
  dp[1]=1;
  dp2[1]=1;
  for(int i=1;i<1000000;i++){
    for(int j=0;j<gu.size();j++){
      if(i+gu[j]>1000000)break;
      dp[i+gu[j]]=min(dp[i+gu[j]],(dp[i]+1));
    }
    for(int j=0;j<ki.size();j++){
      if(i+ki[j]>1000000)break;
      dp[i+ki[j]]=min(dp[i+ki[j]],(dp[i]+1));
      dp2[i+ki[j]]=min(dp2[i+ki[j]],(dp2[i]+1));
    }
  }
  int n;
  while(cin>>n,n){
    cout<<dp[n]<<" "<<dp2[n]<<endl;
  }
  return 0;
}

