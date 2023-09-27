#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)+1):((m)-(n)+1)),(n),((n)>(m)?-1:1))
#define rep(i,n) iota(i,(n),0,1)

#define INF (1e9)
#define EPS (1e-9)
#define cons(a,b) (make_pair(a,b))
#define car(a) (a.first)
#define cdr(a) (a.second)
#define cadr(a) (car(cdr(a)))
#define cddr(a) (cdr(cdr(a)))
#define all(a) a.begin(), a.end()
#define trace(var) cerr<<">>> "<<#var<<" = "<<var<<endl;

typedef long long Integer;
typedef double Real;

template<class S, class T>
ostream& operator<<(ostream& os, pair<S,T> p) {
  os << '(' << car(p) << ", " << cdr(p) << ')';
  return os;
}

template<class T>
ostream& operator<<(ostream& os, vector<T> v) {
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int main() {

entry:;
  int n; cin >> n;
  if (n == 0) return 0;

  int d[10][10];
  rep (i, 10) rep(j, 10) d[i][j] = i == j ? 0 : INF;

  int m = 0;
  rep (i, n) {
    int a, b, c; cin >> a >> b >> c;
    d[a][b] = d[b][a] = c;
    m = max(m, max(a, b));
  }
  ++m;

  rep(k,m)rep(i,m)rep(j,m) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

  long mx = INF;
  int mi = -1;
  rep (i, m) {
    long a = 0;
    rep (j, m) {
      a += d[i][j];
    }
    if (mx > a) {
      mx = a;
      mi = i;
    }
  }

  cout << mi << ' ' << mx << endl;

  goto entry;

  return 0;
}