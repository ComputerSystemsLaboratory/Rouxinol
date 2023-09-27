#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
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

const ll Inf = 0;

class RMQ {
  int n;
  ll *dat;

  ll q(int a, int b, int k, int l, int r) {
    if (r <= a || b <= l) return Inf;
    if (a <= l && r <= b) return dat[k];
    else {
      ll lhs = q(a, b, k*2+1, l, (l+r)/2);
      ll rhs = q(a, b, k*2+2, (l+r)/2, r);
      return lhs + rhs;
    }
  }

 public:

  explicit RMQ(int n_) {
    n = 1;
    while (n < n_) n <<= 1;
    dat = new ll[n*2];
    REP(i,n*2) dat[i] = Inf;
  }

  ~RMQ() { delete[] dat; }

  void update(int k, int a) {
    k += n-1;
    dat[k] += a;
    while (k > 0) {
      k = --k / 2;
      dat[k] += a;
    }
  }

  // Returns the min value of [a, b)
  ll query(int a, int b) {
    return q(a, b, 0, 0, n);
  }
};


int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);
    
  int n, q, c, x, y;
  cin >> n >> q;
  n++;
  RMQ rmq(n);
  REP(i,q){
    cin >> c >> x >> y;
    if (c == 0) {
      rmq.update(x, y);
    } else {
      cout << rmq.query(x, y+1) << '\n';
    }
  }
  cout << flush;

  return 0;
}