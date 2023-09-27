#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;

//const value
//const ll MOD = 1e9 + 7;
//const int dx[] = {0,1,0,-1};//{0,0,1,1,1,-1,-1,-1};
//const int dy[] = {1,0,-1,0};//{1,-1,0,1,-1,0,1,-1};

//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline ll toLL(string s) {ll v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s,t;
  cin >> s >> t;

  /*
  // s1の(i-1)文字目までの文字列に1文字追加する場合
  dp[i][j] = dp[i-1][j] + 1;
  //s2のj文字目を削除する場合
  dp[i][j] = dp[i][j-1] + 1;
  // s1のi文字目とs2のj文字目が同じ文字になるように置換する場合
  dp[i][j] = dp[i-1][j-1] + cost;
  // -> i文字目とj文字目が等しければコストはかからない
  cost = (s[i-1] == t[j-1]) ? 0 : 1;
  */

  int n = s.size() ,m = t.size();
  int dp[s.size()+1][t.size()+1];
  rep(i,n+1)    dp[i][0] = i;
  rep(i,m+1)  dp[0][i] = i;

  FOR(i, 1, n+1) FOR(j, 1, m+1){
    int cost = (s[i-1] == t[j-1]) ? 0 : 1;
    dp[i][j] = min(min(dp[i-1][j]+1, dp[i][j-1]+1), dp[i-1][j-1] + cost);
  }
  cout << dp[n][m] << endl;

  return 0;
}

