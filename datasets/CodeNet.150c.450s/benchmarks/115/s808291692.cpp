#include <iostream>
#include <vector>

using namespace std;

#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;

int solve() {

  string s, t;
  cin >> s >> t;

  // dp[i][j] := s_1,...s_i と t_1,...t_j に対するLCSの長さ
  // s[i] == t[j] なら dp[i-1][j-1] + 1
  // s[i] != t[j] なら max( dp[i-1][j], dp[i][j-1] )
  int dp[s.size()+1][t.size()+1];
  fill(dp[0], dp[s.size()+1], 0);
  for(int i = 0; i < s.size(); i++) {
    for(int j = 0; j < t.size(); j++) {
      if( s[i] == t[j] ) {
        dp[i+1][j+1] = dp[i][j] + 1;
      } else {
        dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
      }
    }
  }

  return dp[s.size()][t.size()];


}


int main() {
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  for(int i = 0; i < N; i++) {
    cout << solve() << "\n";
  }


  return 0;
}