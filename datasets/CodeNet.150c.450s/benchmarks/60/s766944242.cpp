#include <bits/stdc++.h>
using namespace std;

const double pi  = 2 * acos(0.0);
const double eps = 1e-8;

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)
#define INF (1<<29)
#define INFLL (1L<<29)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef int Cost;
struct Edge {
  int src, dst; Cost cost;
  Edge(int s, int d, Cost c) : src(s), dst(d), cost(c) {}
};
typedef vector<Edge>  Edges;
typedef vector<Edges> Graph;
typedef vector<Cost>  Array;
typedef vector<Array> Matrix;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

#define MAX_N 101

int G[MAX_N][MAX_N];

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n; cin >> n;
  rep(i, n) {
    int u, k;
    cin >> u >> k;
    rep(j, k) {
      int node_num; cin >> node_num;
      G[u][node_num] = 1;
    }
  }
  REP(i, 1, n + 1) {
    REP(j, 1, n + 1) {
      if (j != 1) cout << " ";
      cout << G[i][j];
    }
    cout << endl;
  }
  return 0; 
}