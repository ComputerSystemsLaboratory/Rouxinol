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
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int dx[] = { -1, 0, 1, 0 };
int dy[] = {  0, -1, 0, 1 };

int main() {

  int n;
  loop {
    cin >> n;
    if (!cin) break;
    if (!n) break;

    int ac = 0;
    vi xs;
    rep (_, n) {
      int x; cin >> x;
      ac = max(x, ac+x);
      xs.push_back(ac);
    }

    int mx = -INF;
    for (int x:xs) mx = max(x,mx);
    cout << mx << endl;

  }

  return 0;
}