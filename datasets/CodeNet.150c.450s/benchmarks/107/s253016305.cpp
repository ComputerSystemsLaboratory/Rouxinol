// ------------------------------------
// Date:2018/ 3/ 3
// Problem:AOJ DPL Edit Distance (Levenshtein Distance) 1_E.cpp
//
// ------------------------------------

#include <bits/stdc++.h>

using namespace std;

#define EACH(i,a) for (auto&& i : a)
#define FOR(i,a,b) for(int i=(int)a;i<(int)b;++i)
#define RFOR(i,a,b) for(int i=(int)b-1;i>=(int)a;--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define debug(x) cerr << #x << ":" << x << endl

typedef long long ll;

static const int MOD = 1000000007;

// dp[s1の現在見ている文字][s2の現在見ている文字]
int dp[1010][1010]; // 1020100 Byte ≒ 10^6 Byte

int main()
{
  string s1, s2;
  cin >> s1 >> s2;
  REP(i, s1.size() + 1) {
    REP(j, s2.size() + 1) {
      dp[i][j] = 1e9+1;
    }
  }
  REP(i, s1.size() + 1) {
    dp[i][0] = i;
  }
  REP(j, s2.size() + 1) {
    dp[0][j] = j;
  }
  
  REP(i, s1.size()) {
    REP(j, s2.size()) {
      // insert or delete or replace
      dp[i + 1][j + 1] = min(dp[i][j],
                             min(dp[i + 1][j],
                                 dp[i][j + 1])) + 1;
      if (s1[i] == s2[j]) {
        dp[i + 1][j + 1] = min(dp[i][j],
                               dp[i + 1][j + 1]);
      }
    }
  }
  
  int ans = dp[s1.size()][s2.size()];
  
  printf("%d\n", ans);
  return 0;
}

