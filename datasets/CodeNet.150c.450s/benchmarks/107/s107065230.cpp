#include <iostream>
#include <vector>

using namespace std;

#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;



int memo[1001][1001];
bool checked[1001][1001];
int lcs(string s, string t, int si, int ti) {
  if( si == -1 && ti == -1) {
    return 0;
  }
  if( si == -1 ) {
    return lcs(s, t, si, ti-1) + 1;
  } 
  if( ti == -1) {
    return lcs(s, t, si-1, ti) + 1;
  }

  if( checked[si][ti] ) {
    return memo[si][ti];
  }
  checked[si][ti] = true;

  int r1 = lcs(s, t, si-1, ti) + 1;  // sを一文字削除
  int r2 = lcs(s, t, si, ti-1) + 1;  // tを一文字削除
  int r3 = lcs(s, t, si-1, ti-1) + ( s[si] == t[ti] ? 0 : 1 ); // 最後の文字を交換して一致させる。もともと一致している場合は不要

  int res = min(r1, min(r2, r3)  );

  return memo[si][ti] = res;

}


int main() {
  ios::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  cout << lcs(s, t, s.size(), t.size()) << "\n";

  return 0;
}