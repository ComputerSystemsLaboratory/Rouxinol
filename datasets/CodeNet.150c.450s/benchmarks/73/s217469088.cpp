#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define all(v) begin(v), end(v)
#define debug(x) cerr<< #x <<": "<<x<<endl
#define debug2(x,y) cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
template<class T> using vv=vector<vector< T > >;

#define INF INT_MAX
vi seg;
int n;

void update(int index, int x) {
  seg[n + index] += x;
  for (int i = n + index; i >= 2; i /= 2) {
    seg[i/2] = seg[i] + seg[i^1];
  }
}

// seg[k] : [l, r)
int query(int a, int b, int k, int l, int r) {
  if (r <= a || b <= l) {
    return 0;
  }
  if (a <= l && r <= b) {
    return seg[k];
  } else {
    return query(a, b, k*2, l, (l+r)/2) + query(a, b, k*2+1, (l+r)/2, r);
  }
}

int main() {
  int n_, q;
  scanf("%d %d", &n_, &q);
  n = (1 << (int)(ceil(log2(n_))));
  seg.assign(2*n, 0);
  int c, x, y;
  rep (i, q) {
    scanf("%d %d %d", &c, &x, &y);
    x -= 1;
    if (c == 0) {
      update(x, y);
    } else {
      printf("%d\n", query(x, y, 1, 0, n));
    }
  }

  return 0;
}