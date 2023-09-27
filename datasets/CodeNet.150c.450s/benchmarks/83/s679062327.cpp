#include <bits/stdc++.h>
using namespace std;
 
// #define int long long
#define pb push_back
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vii;

template <class X> void print(X Target){ cout << Target << '\n'; }

const int MAXN = 100, MAXW = 10000;
int N, W;
int v[MAXN], w[MAXN];
int dp[MAXN + 1][MAXW + 1];

int recdp(int now, int remW)
{
  if (dp[now][remW] != -1){
    return (dp[now][remW]);
  }
  
  int res;
  if (now == N){
    res = 0;
  }
  else if (remW < w[now]){
    res = recdp(now + 1, remW);
  }
  else {
    res = max(recdp(now + 1, remW), recdp(now + 1, remW - w[now]) + v[now]);
  }
  
  dp[now][remW] = res;

  return (res);
}

signed main()
{
  ios::sync_with_stdio(false);
  memset(dp, -1, sizeof(dp));

  cin >> N >> W;
  for (int i = 0; i < N; i++){
    cin >> v[i] >> w[i];
  }

  print(recdp(0, W));

  return (0);
}