#include <bits/stdc++.h>
/* Karen {{{
  ___  ____
 |_  ||_  _|
   | |_/ /    ,--.   _ .--.  .---.  _ .--.
   |  __'.   `'_\ : [ `/'`\]/ /__\\[ `.-. |
  _| |  \ \_ // | |, | |    | \__., | | | |
 |____||____|\'-;__/[___]    '.__.'[___||__]
}}} */
/* cpp template {{{*/
using namespace std;

#define endl '\n'

#define REP(i, n) for (int i = 0; i < (n); i++)
#define REPS(i, a, n) for (int i = (a); i < (n); i++)
#define RREP(i, n) for (int i = 1; i <= (n); i++)
#define X real()
#define Y imag()
#define EQ(n,m) (abs((n)-(m)) < EPS)

typedef double D;
typedef long long ll;
typedef long double lb;
typedef complex<D> P;
typedef vector<P> VP;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<string, int> psi;

inline bool inside(int y,int x,int H,int W){return(y>=0&&x>=0&&y<H&&x<W);}
inline int in() {int x; std::cin >> x; return x;}

template <typename T>
void print(std::vector<T>& v, char c = ' ') {
  REP(i, v.size()) {
    if (i != 0) std::cout << c;
    std::cout << v[i];
  }
  std::cout << endl;
}
template <typename T>
void print(T x) {
  std::cout << x << '\n';
}
/* }}} */
/* ?????° {{{*/
const ll MOD = 1e9 + 7;
const ll INF = 1e9 + 9;
const D EPS  = 1e-5;
const int dx[] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1, -1, 1};
/* }}} */

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n = in();
  float x[4], y[4];

  while(n--){
    REP(i, 4) cin >> x[i] >> y[i];
    float l1 = (y[1] - y[0]) / (x[1] - x[0]), l2 = (y[3] - y[2]) / (x[3] - x[2]);
    if (l1 == l2){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return (0);
}