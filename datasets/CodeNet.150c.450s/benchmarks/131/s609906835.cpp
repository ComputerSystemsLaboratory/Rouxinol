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

vector<int>
factor(int n, int m) {
  vector<int> r;
  while (n > 0) {
    r.push_back(n % 10);
    n /= 10;
  }
  while (r.size() < m) r.push_back(0);
  return r;
}

int
mul(vector<int>&v) {
  int r = 0;
  for (int n : v) {
    r = r * 10 + n;
  }
  return r;
}

Integer
next(int n, int m) {
  auto f = factor(n, m);
  sort(all(f));
  int a = mul(f);
  reverse(all(f));
  int b = mul(f);
  return b - a;
}

void solve(Integer n, int m) {
  Integer a[21];
  a[0] = n;
  rep (i, 20) {
    n = next(n, m);
    a[i + 1] = n;
    rep (j, i + 1) {
      if (a[j] == n) {
        cout << j << ' ' << n << ' '  << (i - j + 1) << endl;
        return;
      }
    }
  }
}

int main()
{

  for (;;) {
    int n, m; cin >> n >> m;
    if (n || m) solve(Integer(n), m);
    else break;
  }

  return 0;
}