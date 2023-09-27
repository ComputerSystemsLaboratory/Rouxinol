#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)
using namespace std;

static const int N = 100;

int main(){
  int M[N][N];
  int n, u, k, v;

  cin >> n;

  REP(i, n) {
    REP(j, n) {
      M[i][j] = 0;
    }
  }

  REP(i, n) {
    cin >> u >> k;
    u--;
    REP(j, k) {
      cin >> v;
      v--;
      M[u][v] = 1;
    }
  }

  REP(i, n) {
    REP(j, n) {
      if ( j ) cout << " ";
      cout << M[i][j];
    }
    cout << endl;
  }

  return 0;
} 