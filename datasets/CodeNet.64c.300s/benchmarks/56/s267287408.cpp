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

  int n; cin >> n;

  while (n--) {
    int y, m, d; cin >> y >> m >> d;
    --y; --m; --d;
    int cx = 0;
    rep (y_, 1000) {
      rep (m_, 10) {
        rep (d_, 20) {
          if (y_ == y && m_ == m && d_ == d) goto end;

          int D = (y_ % 3 == 2) ? 20 : (m_ % 2 == 0 ? 20 : 19);
          if (d_ == D) break;
          ++cx;
        }
      }
      //trace(cons(y_, cx));
    }
end:;
    const int offset = 196470;
    cout << (offset - cx) << endl;
  }


  return 0;
}