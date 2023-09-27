#include <iostream>
#include <iomanip>
#include <vector>


#define debug(x) cout << #x << "==" << x << endl;
const int INF = 1e+9 + 7;
typedef long long ll;

//??\???
#define MAX_N 10000


using namespace std;

class UnionFind {

private:
  int N;
  vector<int> par;
  vector<int> rank;

  void init(int n)  {
    for (int i = 0; i < n; i++) {
      par[i] = i;
      rank[i] = 0;
    }
  }

public:
  UnionFind(int n) {
    N = n;
    par.resize(n);
    rank.resize(n);
    init(n);
  }


  int  root(int x) {
    if( par[x] == x ) {
      return x;
    } else {
      return par[x] = root(par[x]);
    }
  }

  bool same(int x, int y) {
    return root(x) == root(y);
  }

  void unite(int x, int y) {
    x = root(x);
    y = root(y);

    if( x == y) return;

    if( rank[x] < rank[y] ) {
      par[x] = y;
    } else {
      par[y] = x;
      if(rank[x] == rank[y]) { rank[x]++; }
    }

  }

};






int main() {
  ios::sync_with_stdio(false);


  int n, q;
  cin >> n >> q;

  UnionFind uf = UnionFind(n);

  int com, x, y;
  for(int i = 0; i < q; i++) {
    cin >> com >> x >> y;

    if( com == 0 ) {
      uf.unite(x,y);
    }

    if( com == 1 ) {
      cout << ( uf.same(x, y) ? 1 : 0 )  << endl;
    }

  }



  return 0;
}