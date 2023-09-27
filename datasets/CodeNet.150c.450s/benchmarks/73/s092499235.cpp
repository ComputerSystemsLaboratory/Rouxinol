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

template <class Monoid> class SegmentTree {
  using F = std::function<Monoid(Monoid, Monoid)>;

  private:
    int sz;
    std::vector<Monoid> seg;

    const F f;
    const Monoid M1;

  public:
    SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
      sz = 1;
      while(sz < n) sz *= 2;
      seg.assign(2 * sz, M1);
    }

    void update(int k, const Monoid &x) {
      k += sz - 1;
      seg[k] = x;
      while(k > 0) {
        k = (k - 1) / 2;
        seg[k] = f(seg[2 * k + 1], seg[2 * k + 2]);
      }
    }

    void add(int k, const Monoid &x) {
      k += sz - 1;
      seg[k] += x;
      while(k > 0) {
        k = (k - 1) / 2;
        seg[k] = f(seg[2 * k + 1], seg[2 * k + 2]);
      }
    }

    Monoid query(int a, int b, int k = 0, int l = 0, int r = -1) {
      if(r == -1) r = sz;

      if(b <= l || r <= a) return M1;
      if(a <= l && r <= b) return seg[k];
      Monoid vl = query(a, b, 2 * k + 1, l, (l + r) / 2);
      Monoid vr = query(a, b, 2 * k + 2, (l + r) / 2, r);
      return f(vl, vr);
    }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;
  SegmentTree<int> seg(n, [](int a, int b){ return a + b; }, 0);
  rep(i, 0, q) {
    int c, x, y;
    cin >> c >> x >> y;
    x--;
    if(c == 0) seg.add(x, y);
    else cout << seg.query(x, y) << endl;
  }
}
