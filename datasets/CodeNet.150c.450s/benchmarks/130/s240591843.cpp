#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define MD 1000000007

char sep[2] = {' ', '\n'};

int main() {
  int i, j, k, n, m;

  int a[110][110], b[110];
  cin >> n >> m;
  rep(i, n) rep(j, m) cin >> a[i][j];
  rep(k, m) cin >> b[k];
  rep(i, n) {
    k = 0;
    rep(j, m) k += a[i][j] * b[j];
    cout << k << endl;
  }
  
  
  return 0;
}
  