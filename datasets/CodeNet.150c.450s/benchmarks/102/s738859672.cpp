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

int main()
{
entry:;

  int w, h; cin >> w >> h;
  if (!w && !h) return 0;

  int f[h][w];
  int ci, cj;
  rep (i, h) {
    string s; cin >> s;
    rep (j, s.size()) {
      if (s[j] == '.') {
        f[i][j] = 1;
      } else if (s[j] == '@') {
        f[i][j] = 1;
        ci = i;
        cj = j;
      } else {
        f[i][j] = 0;
      }
    }
  }

  stack<pair<int,int>> s;
  s.push(cons(ci, cj));

  int ans = 0;
  while (!s.empty()) {
    pair<int, int> x = s.top(); s.pop();
    if (f[car(x)][cdr(x)] == 0) continue;
    f[car(x)][cdr(x)] = 0;
    ++ans;

    if (car(x) > 0) s.push(cons(car(x) - 1, cdr(x)));
    if (cdr(x) > 0) s.push(cons(car(x), cdr(x) - 1));
    if (car(x) < h - 1) s.push(cons(car(x) + 1, cdr(x)));
    if (cdr(x) < w - 1) s.push(cons(car(x), cdr(x) + 1));

  }

  cout << ans << endl;

  goto entry;

  return 0;
}