#include <bits/stdc++.h>

#define INF 1 << 30

#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define DOWN(i,b,a) for(int i=b;i>=a;i--)

using namespace std;

int main()
{
  int n, W; cin >> n >> W;
  vector<int> v(n);
  vector<int> w(n);
  REP(i,n) cin >> v[i] >> w[i];
  // vector<int> dp(10001,0);
  // REP(i,n) DOWN(j, W, w[i])
  //   dp[j] = max(dp[j],dp[j-w[i]] + v[i]);
  // cout << *max_element(dp.begin(),dp.begin()+W+1) << endl;
  vector<int> dp(100001,INF);
  dp[0] = 0;
  REP(i,n) DOWN(j,100000,v[i])
    dp[j] = min(dp[j],dp[j-v[i]]+w[i]);
  DOWN(i,100000,0) if(dp[i] <= W)
  {
    cout << i << endl;
    break;
  }
}