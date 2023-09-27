#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll MOD = 1000000007;
const ll INF = 9999999999;
const int INFI = 2147483647;
template<class T> inline bool chmin(T& a, T b){if (a>b){a = b; return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if (a<b){a = b; return true;}return false;}
template<class T> inline T powerM(T a,T b){if (b==0) return 1;
  T tmp = powerM(a,b/2); if (b%2==0) return tmp*tmp%MOD; else return tmp*tmp%MOD*a%MOD; }

int main() {
  string s,t; cin >>s >>t;
  int n = s.size(), m = t.size();
  vector<vector<int>> dp(n+1, vector<int>(m+1, 10000));
  dp[0][0] = 0;
  rep(i, n) dp[i+1][0] = i+1;
  rep(i, m) dp[0][i+1] = i+1;
  // dp[i][j]...sのi文字目までとj文字目までとの編集距離
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      if (s.at(i) == t.at(j)) chmin(dp[i+1][j+1], dp[i][j]);
      chmin(dp[i+1][j+1], dp[i][j] + 1); // 置換
      chmin(dp[i+1][j+1], dp[i+1][j]+1); // 挿入/削除
      chmin(dp[i+1][j+1], dp[i][j+1]+1); // 挿入/削除
    }
  }
  int res = dp[n][m];
  cout <<res <<endl;
}

