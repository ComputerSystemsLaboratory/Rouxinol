#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define REP(i, n) FOR(i, 0, n)
#define RFOR(i, a, b) for(int i=(a);i>=(b);i--)
#define RREP(i, n) RFOR(i, n, 0)
#define MFOR(i, m) for(auto i=(m).begin();i!=(m).end();i++)
#define ALL(a) (a).begin(), (a).end()
#define SZ(x) ((int)(x).size())

typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const double eps = 1e-10;
const int MOD = 1000000007;
const int INF = 1000000000;
const ll LINF = 1 << 30;

template<typename T>
void printv(vector<T> const& s) {
  REP(i, SZ(s)) {
    cout << s[i] << " ";
  }
  cout << endl;
}

int main () {
  cin.tie(0);
  cout << setprecision(10);

  while(1) {
    int n, m; cin >> n >> m;
    if(n == 0 && m == 0) break;
    vector<P> p(n);
    REP(i, n) {
      cin >> p[i].se >> p[i].fi;
    }
    sort(ALL(p), greater<P>());
    ll ans = 0;
    REP(i, n) {
      if(m >= p[i].se) {
        m -= p[i].se;
      } else if(m > 0){
        p[i].se -= m;
        m = 0;
        ans += p[i].fi * p[i].se;
      } else {
        ans += p[i].fi * p[i].se;
      }
    }
    cout << ans << endl;
  }
  
}

