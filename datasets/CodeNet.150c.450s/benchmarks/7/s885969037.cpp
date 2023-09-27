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

typedef long long INTEGER;
typedef double FLOAT;

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

void swap(int*a, int*b) {
  int t = *b;
  *b = *a;
  *a = t;
}

int main() {

  int hs[4];
  hs[3] = -1;

  rep (i, 10) {
    int h; cin >> h;
    if (i < 3) {
      hs[i] = h;
    } else {
      hs[3] = h;
      sort(hs, hs + 4);
      swap(hs, hs + 3);
      swap(hs + 1, hs + 2);
    }
  }

  rep (i, 3) {
    cout << hs[i] << endl;
  }

  return 0;
}