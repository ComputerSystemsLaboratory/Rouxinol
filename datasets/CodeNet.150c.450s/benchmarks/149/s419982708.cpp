#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define MP make_pair
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl
#define fst first
#define snd second


#define MAX_N 10000

int parent[MAX_N];
int rank[MAX_N];

struct DisjointSet {
  int parent[MAX_N];
  int rank[MAX_N];

  DisjointSet(int N) {
    for (int i = 0; i < N; i++) {
      parent[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x) {
    if (parent[x] == x) {
      return x;
    } else {
      return parent[x] = find(parent[x]);
    }
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return ;

    if (rank[x] < rank[y]) {
      parent[x] = y;
    } else {
      parent[y] = x;
      if (rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }
      
};

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;
  DisjointSet uf(N);

  REP(i, Q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uf.unite(x, y);
    } else {
      cout << uf.same(x, y) << endl;
    }
  }

  return 0;
}