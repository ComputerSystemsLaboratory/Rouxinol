#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;

static const int N = 1000;

int Lcs(string X, string Y) {
  int c[N + 1][N + 1];
  int m = X.size();
  int n = Y.size();
  int maxl = 0;
  X = ' ' + X;
  Y = ' ' + Y;
  REP(i, m + 1) c[i][0] = 0;
  REP(j, n + 1) c[0][j] = 0;

  REP1(i, m + 1) {
    REP1(j, n + 1) {
      if ( X[i] == Y[j] ) {
        c[i][j] = c[i - 1][j - 1] + 1;
      } else {
        c[i][j] = max(c[i - 1][j], c[i][j - 1]);
      }
      maxl = max(maxl, c[i][j]);
    }
  }

  return maxl;
}

int main() {
  string s1, s2;
  int n;
  cin >> n;
  REP(i, n) {
    cin >> s1 >> s2;
    cout << Lcs(s1, s2) << endl;
  }
  return 0;
}