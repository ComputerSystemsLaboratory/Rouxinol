#include <bits/stdc++.h>

using namespace std;

#define REP(i,m) for(long long i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
#define INF 1000000000
#define INFL 10000000000000000LL
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define ll long long int
#define P pair<ll, ll>

int main() {
  int n, m;
  cin >> n >> m;
  int a[n][m], b[m];
  REP(i, n)REP(j, m) cin >> a[i][j];
  REP(i, m) cin >> b[i];
  REP(i, n){
    int x = 0;
    REP(j, m) x += a[i][j]*b[j];
    cout << x << endl;
  }
  return 0;
}

