#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define PB push_back
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);
typedef pair<ll,ll> pii;

ll editDistance(string s1,string s2){
  ll l1=s1.length(),l2=s2.length();
  vvi dp(l1+1,vi(l2+1));
  REP(i,l1+1) dp[i][0]=i;
  REP(i,l2+1) dp[0][i]=i;
  FOR(i,1,l1+1) FOR(j,1,l2+1){
    dp[i][j]=min(dp[i][j-1],dp[i-1][j])+1;
    if(s1[i-1]==s2[j-1]) dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
    else dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
  }
  return dp[l1][l2];
}

int main(){
  string s1,s2; cin>>s1>>s2;
  cout<<editDistance(s1,s2)<<endl;
}