#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) begin(v), end(v)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for(int i = (int)(s); i < (int)(n); i++)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})

template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

using pint = pair<int, int>;
using tint = tuple<int, int, int>;
using vint = vector<int>;

const int inf = 1LL << 55;
const int mod = 1e9 + 7;

struct UnionFind {
  vector<int> data;
  UnionFind(int n):data(n, -1){}
  int find(int x) { return (data[x] < 0 ? x : data[x] = find(data[x])); }
  int size(int x) { return -data[find(x)]; }
  bool same(int x, int y) { return find(x) == find(y); }
  bool unite(int x, int y) {
    x = find(x), y = find(y);
    if(x == y) return false;
    if(data[x] < data[y]) swap(x, y);
    data[x] += data[y]; data[y] = x;
    return true;
  }
};

signed main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << fixed << setprecision(12);

  int n, q;
  cin >> n >> q;

  UnionFind uf(n);
  rep(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) uf.unite(x, y);
    else cout << uf.same(x, y) << endl;
  }

  return 0;
}