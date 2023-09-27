#include<bits/stdc++.h>
#define ll long long int
#define FOR(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define REP1(i,n) FOR(i,1,n)

using namespace std;

static const int MAX = 100000;
static const int NIL = -1;

int n, color[MAX];
vector<int> G[MAX];

void dfs(int r, int c) {
  stack<int> S;
  S.push( r );
  color[r] = c;
  while ( !S.empty() ) {
    int u = S.top();
    S.pop();
    REP(i, G[u].size()) {
      int v = G[u][i];
      if ( color[v] == NIL ) {
        color[v] = c;
        S.push( v );
      }
    }
  }
}

void assignColor() {
  int id = 1;
  REP(i, n) color[i] = NIL;
  REP(u, n) {
    if ( color[u] == NIL ) dfs(u, id++);
  }
}

int main() {
  int s, t, m, q;

  cin >> n >> m;

  REP(i, m) {
    cin >> s >> t;
    G[s].push_back( t );
    G[t].push_back( s );
  }

  assignColor();

  cin >> q;
  REP(i, q) {
    cin >> s >> t;
    if ( color[s] == color[t] ) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}