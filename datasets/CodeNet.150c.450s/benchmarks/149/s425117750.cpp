#include <bits/stdc++.h>
using namespace std;

#define rep(i,j,n) for(int i=j;i<n;++i)
#define all(i) i.begin(),i.end()
#define rall(i) i.rbegin(), i.rend()
#define INF 1e9
#define LINF 1e18
const int mod = 1e9 + 7;

typedef long long i64;
typedef pair<int, int> pi;

template <class T> using vt = vector<T>;
template <class T> using vvt = vector<vector<T>>;

i64 gcd(i64 n, i64 m) {return (m == 0? n : gcd(m, n % m));}
i64 lcd(i64 n, i64 m) {return (n / gcd(n, m) * m);}
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

class UnionFind {
    private:
      std::vector<int> par;
      std::vector<int> sizes;
      std::vector<int> rank;
      int group;

    public:
      UnionFind(int n) : par(n), sizes(n, 1), rank(n, 0), group(n) {
        for(int i = 0; i < n; ++i) par[i] = i;
      }

      int find(int x) {
        if(x == par[x]) return x;
        return par[x] = find(par[x]);
      }

      void unite(int x, int y) {
        x = find(x);
        y = find(y);

        if(x == y) return;

        if(rank[x] < rank[y]) std::swap(x, y);
        par[y] = x;
        sizes[x] += sizes[y];
        if(rank[x] == rank[y]) rank[x]++;
        group--;
      }

      bool same(int x, int y) {
        return find(x) == find(y);
      }

      int size(int x) {
        return sizes[find(x)];
      }

      int groupSize() {
        return group;
      }
  };

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  rep(i, 0, q) {
    int c, x, y;
    cin >> c >> x >> y;
    if(c == 0) uf.unite(x, y);
    else {
      if(uf.same(x, y)) cout << 1 << endl;
      else cout << 0 << endl;
    }
  }
}
