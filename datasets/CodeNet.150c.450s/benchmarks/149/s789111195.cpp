#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <algorithm>
#include <numeric>
#include <functional>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

using namespace std;
typedef long long ll;

class UnionFind {
  int *id, *sz;
  
  int root(int x) {
    if (id[x] != x)
      id[x] = root(id[x]);
    return id[x];
  }
  
 public:

  explicit UnionFind(int n) {
    id = new int[n];
    sz = new int[n];
    REP(i,n) {
      id[i] = i;
      sz[i] = 0;
    }
  }
  
  ~UnionFind() {
    delete[] id;
    delete[] sz;
  }

  bool same(int p, int q) {
    return root(p) == root(q);
  }

  void unite(int p, int q) {
    int i = root(p), j = root(q);
    if (sz[i] < sz[j]) {
      id[i] = j;
      sz[j] += sz[i];
    } else {
      id[j] = i;
      sz[i] += sz[j];
    }
  }
};



int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);
    
  int n, q, com, x, y;

  cin >> n >> q;
  UnionFind uf(n);
  REP(i,q) {
    cin >> com >> x >> y;
    if (com == 0) uf.unite(x, y);
    else if (uf.same(x, y)) cout << 1 << endl;
    else cout << 0 << endl;
  }

  return 0;
}