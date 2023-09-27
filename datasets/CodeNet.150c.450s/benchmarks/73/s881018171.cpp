#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) (v).begin(), (v).end()
#define resz(v, ...) (v).clear(), (v).resize(__VA_ARGS__)
#define reps(i, m, n) for(int i = (int)(m); i < (int)(n); i++)
#define rep(i, n) reps(i, 0, n)

template<class T1, class T2> void chmin(T1 &a, T2 b){if(a>b)a=b;}
template<class T1, class T2> void chmax(T1 &a, T2 b){if(a<b)a=b;}

typedef pair<int, int> Pi;
typedef tuple<int, int, int> Ti;
typedef vector<int> vint;

const int inf = 1LL << 55;
const int mod = 1e9 + 7;

// SegmentTree
template<class T> struct Min {
  using Type = T;
  T nil;
  Min(){}
  Min(T nil):nil(nil){}
  void update(T& a, T b) { a = b; }
  T operator()(T a, T b) { return a < b ? a : b; }
};
template<class T> struct Max {
  using Type = T;
  T nil;
  Max(){}
  Max(T nil):nil(nil){}
  void update(T& a, T b) { a = b; }
  T operator()(T a, T b) { return a > b ? a : b; }
};
template<class T> struct Sum {
  using Type = T;
  T nil;
  Sum(){}
  Sum(T nil):nil(nil){}
  void update(T& a, T b) { a += b; }
  T operator()(T a, T b) { return a + b; }
};

template<class Monoid> struct SegmentTree {
  using T = typename Monoid::Type;
  vector<T> data;
  Monoid func;
  int sz;
  SegmentTree(int n, Monoid f):func(f) {
    sz = 1; while(sz < n) sz <<= 1;
    data.resize(2*sz+1, func.nil);
  }
  void update(int k, T x) {
    k += sz-1;
    func.update(data[k], x);
    while(k > 0) {
      k = (k-1)/2;
      data[k] = func(data[2*k+1], data[2*k+2]);
    }
  }
  T query(int a, int b, int k, int l, int r) {
    if(r <= a || b <= l) return func.nil;
    if(a <= l && r <= b) return data[k];
    return func(query(a, b, 2*k+1, l, (l+r)/2), query(a, b, 2*k+2, (l+r)/2, r));
  }
  T query(int a, int b) {
    return query(a, b, 0, 0, sz);
  }
};


signed main()
{
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cout << fixed << setprecision(12);

  int n, q;
  cin >> n >> q;
  SegmentTree<Sum<int>> seg(n, Sum<int>(0));
  rep(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if(com == 0) seg.update(x-1, y);
    else cout << seg.query(x-1, y) << endl;
  }

  return 0;
}