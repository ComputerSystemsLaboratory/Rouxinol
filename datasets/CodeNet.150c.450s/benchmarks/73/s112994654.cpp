#include <iostream>
#include <iomanip>
#include <climits>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <functional>
#include <numeric>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <unordered_map>
#include <random>
#define _USE_MATH_DEFINES
#include <math.h>
#include <complex>

using namespace std;

#define INF (int)1e8
#define _INF (int)-1e8
#define INFLL (long long)1e15
#define _INFLL (long long)-1e15
#define Loop(i, n) for(int i = 0; i < (int)n; i++)
#define Loop1(i, n) for(int i = 1; i <= (int)n; i++)
#define Loopr(i, n) for(int i = (int)n - 1; i >= 0; i--)
#define Loopr1(i, n) for(int i = (int)n; i >= 1; i--)
#define bitmanip(m,val) static_cast<bitset<(int)m>>(val)
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int, int> P;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<double> vd;
typedef vector<vector<double>> vvd;
typedef complex<double> cdouble;
typedef vector<complex<double>> vcd;
typedef vector<vector<complex<double>>> vvcd;

/*******************************************************/

typedef int seg_t;

/*
segtree設計全貌
update rule はununiqueでもよいとする
method: void update
  arg: index k, seg_t x, add_flag, seg_t(*update_rule)(seg_t, seg_t)
  content: update seg[n - 1 + k] and related trees in rule 
method: vector<int> index_of_range
  arg: index s, index t
  content: return index of range [s,t)
組み込みを許可する
*/

class SegTree {
private:
  int n;
  vector<seg_t> segtree;
  int left_of(int index) {
    return index * 2 + 1;
  }
  int right_of(int index) {
    return index * 2 + 2;
  }
  void local_update(int index, seg_t(*update_rule)(seg_t, seg_t)) {
    int l = left_of(index), r = index * 2 + 2;
    segtree[index] = update_rule(segtree[l], segtree[r]);
  }
  void get_index_of_range_sub(int s, int t, int l, int r, int index, vi *v) {
    if (s == l && t == r) v->push_back(index);
    else {
      int mid = (l + r) / 2;
      if (s < mid && mid < t) {
        get_index_of_range_sub(s, mid, l, mid, left_of(index), v);
        get_index_of_range_sub(mid, t, mid, r, right_of(index), v);
      }
      else if (s < mid) {
        get_index_of_range_sub(s, t, l, mid, left_of(index), v);
      }
      else if (mid < t) {
        get_index_of_range_sub(s, t, mid, r, right_of(index), v);
      }
    }
  }
public:
  SegTree(vector<seg_t> a, seg_t init, seg_t(*update_rule)(seg_t, seg_t)) {
    n = (int)pow(2, ceil(log2(a.size())));
    segtree = vector<seg_t>(n * 2 - 1, init);
    Loop(i, a.size()) segtree[n - 1 + i] = a[i];
    Loopr(i, n - 1) local_update(i, update_rule);
  }
  void update(int k, seg_t x, seg_t(*update_rule)(seg_t, seg_t), bool add_flag = false) {
    int index = k + n - 1;
    segtree[index] = add_flag ? segtree[index] + x : x;
    while (index > 0) {
      index = (index - 1) / 2;
      local_update(index, update_rule);
    }
  }
  // note: range [s, t)
  vi get_index_of_range(int s, int t) {
    vi ret = {};
    get_index_of_range_sub(s, t, 0, n, 0, &ret);
    return ret;
  }
  // write extend method from here:
  seg_t sum_of_range(int s, int t) {
    vi v = get_index_of_range(s, t);
    seg_t m = 0;
    Loop(i, v.size()) {
      m += segtree[v[i]];
    }
    return m;
  }
};

seg_t update_rule(seg_t a, seg_t b) {
  return a + b;
}

int main() {
  int n; cin >> n;
  int q; cin >> q;
  vector<seg_t> a(n, 0);
  SegTree segtree(a, INT_MAX, update_rule);
  Loop(i, q) {
    int c, x, y; cin >> c >> x >> y;
    if (c == 0) {
      segtree.update(x - 1, y, update_rule, true);
    }
    else {
      cout << segtree.sum_of_range(x - 1, y) << endl;
    }
  }
  return 0;
}
