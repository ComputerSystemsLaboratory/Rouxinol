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

int count(vector<int> ls, int x) {
  const int n = ls.size();
  int left;
  int right;

  {{{ // search left
    if (ls[0] == x) {
      left = 0;
    } else {
      int l = 0;
      int r = n;
      // ls[l] < x <= ls[r]
      while (l < r) {
        if (l + 1 == r) {
          if (ls[l] == x) left = l;
          else if (ls[r] == x) left = r;
          else return 0;
          break;
        }
        int m = (l + r) / 2;
        if (ls[m] < x) {
          l = m;
        } else {
          r = m;
        }
      }
    }
  }}}

  {{{ // search right
    if (ls[n-1] == x) {
      right = n;
    } else {
      int l = 0;
      int r = n;
      // ls[l] <= x < ls[r]
      while (l < r) {
        if (l + 1 == r) {
          if (ls[l] == x) right = r;
          else if (ls[r] == x) right = r + 1;
          else return 0;
          break;
        }
        int m = (l + r) / 2;
        if (ls[m] <= x) {
          l = m;
        } else {
          r = m;
        }
      }
    }
  }}}

  return right - left;
}

int main() {

more:;
     int n, m; cin >> n >> m;
     if (!n && !m) return 0;

     vector<int> as = {0};
     vector<int> bs = {0};

     int a = 0;
     rep (i, n) {
       int h; cin >> h;
       a += h;
       as.push_back(a);
     }
     int b = 0;
     rep (i, m) {
       int h; cin >> h;
       b += h;
       bs.push_back(b);
     }

     map<int, int> ws;
     map<int, int> hs;

     rep (i, n) {
       range (j, i + 1, n + 1) {
         ws[as[j] - as[i]]++; } }

     rep (i, m) {
       range (j, i + 1, m + 1) {
         hs[bs[j] - bs[i]]++; } }

     int ans = 0;
     for (auto&pr : ws) {
       int w = car(pr);
       int c = cdr(pr);
       ans += hs[w] * c;
     }
     cout << ans << endl;
     goto more;

  return 0;
}