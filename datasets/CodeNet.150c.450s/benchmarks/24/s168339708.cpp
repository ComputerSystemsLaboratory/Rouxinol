#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)):((m)-(n))),(n),((n)>(m)?-1:1))
#define rep(i,n) iota(i,(n),0,1)
#define loop for(;;)

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
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<string,int> Dictionary;
const Real PI = acos(-1);

template<class S, class T>
ostream& operator<<(ostream& os, pair<S,T> p) {
  os << '(' << car(p) << ", " << cdr(p) << ')';
  return os;
}

template<class T>
ostream& operator<<(ostream& os, vector<T> v) {
  if (v.size() == 0) {
    os << "(empty)";
    return os;
  }
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int dx[] = { -1, 0, 1, 0 };
int dy[] = {  0, -1, 0, 1 };

bool contains(vector<int>&vs, int x) {
  for (int v : vs) {
    if (v == x) return true;
  }
  return false;
}

int main() {
more:;
  int n, m; cin >> n >> m;
  if (!n && !m) return 0;

  vector<pair<int, int>> dps;

  rep (i, n) {
    int d, p; cin >> d >> p;
    dps.push_back(cons(p, d));
  }
  sort(all(dps));
  reverse(all(dps));

  int idx = 0;
  rep (i, m) {
    while (cdr(dps[idx]) <= 0) ++idx;
    if (idx >= n) break;
    cdr(dps[idx])--;
  }

  int sum = 0;
  rep (i, n) {
    sum += car(dps[i]) * cdr(dps[i]);
  }
  cout << sum << endl;

  goto more;
}