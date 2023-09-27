#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;
typedef pair<ll,ll> pll;
const ll mod=1e9+7;
//const ll mod=998244353;
const ll inf=5e18;

int main() {
  string s;
  string t;
  cin >> s >> t;
  mat dp(s.size()+1,vec(t.size()+1,inf));
  dp[0][0]=0;
  for(ll i=0;i<=s.size();i++) {
    for(ll j=0;j<=t.size();j++) {
      if(i>0&&j>0) {
        if(s[i-1]==t[j-1]) {
          dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
        }
        else {
          dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
        }
      }
      if(i>0) dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
      if(j>0) dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
    }
  }
  cout << dp[s.size()][t.size()] << endl;
}
