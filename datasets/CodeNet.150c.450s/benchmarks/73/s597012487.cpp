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

/*
Range Sum Query by FenwickTree(Binary Indexed Tree)

total number: n
queries:
    1. add(i, val): bit[i] += val 
    2. sum(n): sum(bit[0] + ... + bit[n-1])
time complexity: O(log n)
space complexity: O(N)

Self-balancing binary search tree or Segment Tree can do the same, it takes longer to program and complexity also increases.

Thanks: http://hos.ac/slides/20140319_bit.pdf
    
used in ARC031 C, indeednow finalB E, DSL2B(AOJ), ARC033 C, yukicoder No.59
*/

template<typename T> struct RangeSumQuery {
  int N;
  vector<T> dat;

  RangeSumQuery(int N) : N(N) { dat.resize(N, 0); }

  void add(int k, T val) {
    for (int x = k; x < N; x |= x + 1) {
      dat[x] += val;
    }
  }

  // [0, k)
  T sum(int k) {
    T ret = 0;
    for (int x = k - 1; x >= 0; x = (x & (x + 1)) - 1) {
      ret += dat[x];
    }
    return ret;
  }
  // [l, r)
  T sum(int l, int r) { return sum(r) - sum(l); }

  T index(int k) { return sum(k+1) - sum(k); }
};


int main() {
  ios_base::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;

  RangeSumQuery<int> bit(n);

  REP(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      bit.add(x-1, y);
    } else if (com == 1) {
      cout << bit.sum(x-1, y) << endl;
    }
  }
  return 0;
}