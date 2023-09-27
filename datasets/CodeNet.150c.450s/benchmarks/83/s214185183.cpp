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

signed main()
{
  ios::sync_with_stdio(false);
  int N, W;
  int dp[MAXN + 1][MAXW + 1];
  int v[MAXN + 1], w[MAXN + 1];

  cin >> N >> W;
  for (int i = 1; i <= N; i++) cin >> v[i] >> w[i];

  // init
  for (int i = 0; i < W; i++) dp[0][i] = 0;
  for (int i = 0; i < N; i++) dp[i][0] = 0;

  for (int i = 1; i <= N; i++){
    for (int j = 1; j <= W; j++){
      if (w[i] > j){
        dp[i][j] = dp[i - 1][j];
      }
      else {
        dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
      }
    }
  }

  print(dp[N][W]);

  return (0);
}