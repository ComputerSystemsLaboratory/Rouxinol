#include <iostream>
#include <vector>

using namespace std;

template<typename T>
vector<vector<T>> make_2d_vector(size_t rows, size_t cols, T init)
{ return vector< vector<T> >(rows, vector<T>(cols, init)); }

#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;



int memo[1001][1001];
bool checked[1001][1001];
// Levenshtein Distance
int ld(string s, string t, int si, int ti) {
  if( si == -1 && ti == -1) {
    return 0;
  }
  if( si == -1 ) {
    return ld(s, t, si, ti-1) + 1;
  }
  if( ti == -1) {
    return ld(s, t, si-1, ti) + 1;
  }

  if( checked[si][ti] ) {
    return memo[si][ti];
  }
  checked[si][ti] = true;

  int r1 = ld(s, t, si-1, ti) + 1;  // s??????????????????
  int r2 = ld(s, t, si, ti-1) + 1;  // t??????????????????
  int r3 = ld(s, t, si-1, ti-1) + ( s[si] == t[ti] ? 0 : 1 ); // ???????????????????????????????????´?????????????????¨?????¨?????´??????????????´????????????

  int res = min(r1, min(r2, r3)  );

  return memo[si][ti] = res;

}


int main() {
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  int s_size = s.size();
  int t_size = t.size();

  // dp[i][j] := s1,..si ??¨ t1,..,tj ??? Edit Distance.
  // dp[0][0] = 0;
  // dp[i+1][j+1] =
  //   min(
  //     dp[i][j+1] + 1,  ?????????????????????
  //     dp[i+1][j] + 1,  ?????????????????????
  //     dp[i][j]  (+1 if s[i] != s[j]) ?????´???????????????????????????????????????????????????????????????
  //   )
  auto dp = make_2d_vector(s_size + 1, t_size + 1, -inf);

  for(int i = 0; i <= s_size; i++) { dp[i][0] = i; }
  for(int j = 0; j <= t_size; j++) { dp[0][j] = j; }

  for(int i = 0; i < s_size; i++) {
    for(int j = 0; j < t_size; j++) {
      dp[i+1][j+1] = min( dp[i][j] + ( s[i]==t[j] ? 0 : 1 ),
                          min( dp[i][j+1] + 1, dp[i+1][j] + 1 ) );
    }
  }

  cout << dp[s_size][t_size] << "\n";

  // cout << ld(s, t, s.size() - 1, t.size() - 1) << "\n";

  return 0;

}