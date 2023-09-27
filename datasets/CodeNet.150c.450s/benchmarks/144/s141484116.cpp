#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m, l;

  ll a[110][110], b[110][110], c[110][110];
  cin >> n >> m >> l;
  rep(i, n) rep(j, m) cin >> a[i][j];
  rep(i, m) rep(j, l) cin >> b[i][j];
  rep(i, n) rep(j, l) {
    c[i][j] = 0;
    rep(k, m) c[i][j] += a[i][k] * b[k][j];
    cout << c[i][j] << sep[j == l - 1];
  }
  cout << flush;

  return 0;
}
  