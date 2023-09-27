#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define FOR(i,b,e) for(int i=b;i<e;i++)
#define REP(i,n) FOR(i,0,n)
using namespace std;

int dp[1001][1001];
string s1, s2;

int lcs(int n1, int n2) {
  if (dp[n1][n2] != -1) return dp[n1][n2];
  
  dp[n1][n2] = (s1[n1-1] == s2[n2-1]) ? (1 + lcs(n1 - 1, n2 - 1)) : max(lcs(n1 - 1, n2), lcs(n1, n2 - 1));
  return dp[n1][n2];
}

int main() {
	cin.tie(0);
 	ios::sync_with_stdio(false);


  int q; cin >> q;
  REP(i, q) {
    REP(i, 1001) {
      REP(j, 1001) {
        dp[i][j] = -1;
      }
    }
    REP(i, 1001) dp[i][0] = 0;
    REP(i, 1001) dp[0][i] = 0;

    cin >> s1;
    cin >> s2;

    cout << lcs(s1.length(), s2.length()) << endl;
  }
}