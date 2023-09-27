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

#define INF 2147483647
const int MAX_N = 1 << 17;

/*
Range Sum Query by FenwickTree(Binary Indexed Tree)

total number: n
queries:
    1. add(i, val): add val to i-th value 
    2. sum(k): sum(bit[0] + ... + bit[k])
complexity: O(log n)

Self-balancing binary search tree or Segment Tree can do the same, it takes longer to program and complexity also increases.

Thanks: http://hos.ac/slides/20140319_bit.pdf
    
used in ARC031 C, indeednow finalB E, DSL2B(AOJ)
*/

int dat[MAX_N + 1];

struct RangeSumQuery {
  int N;

  RangeSumQuery(int N_){
    N = N_;
  }

  void update(int k, int val) {
    while (k < N) {
      dat[k] += val;
      k |= k + 1;
    }
  }

  int query(int k) {
    int ret = 0;
    while (k >= 0) {
      ret += dat[k];
      k = (k & (k + 1)) - 1;
    }
    return ret;
  }
};

int main() {
  ios_base::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;

  RangeSumQuery bit(n);

  REP(i, q) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      bit.update(x-1, y);
    } else if (com == 1) {
      cout << bit.query(y-1) - bit.query(x-2) << endl;
    }
  }
  return 0;
}