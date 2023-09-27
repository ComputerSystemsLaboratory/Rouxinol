#include <bits/stdc++.h>

using namespace std;

#define SZ(x) (int)(x.size())
#define REP(i, n) for(int i=0;i<(n);++i)
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define RREP(i, n) for(int i=(int)(n);i>=0;--i)
#define RFOR(i, a, b) for(int i=(int)(a);i>=(int)(b);--i)
#define ALL(a) (a).begin(),(a).end()
#define DUMP(x) cerr<<#x<<" = "<<(x)<<endl
#define DEBUG(x) cerr<<#x<<" = "<<(x)<<" (L"<<__LINE__<<")"<< endl;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using P = pair<int, int>;

const double eps = 1e-8;
const ll MOD = 1000000007;
const int INF = INT_MAX / 2;
const ll LINF = LLONG_MAX / 2;

template <typename T1, typename T2>
bool chmax(T1 &a, const T2 &b) {
  if(a < b) {a = b; return true;}
  return false;
}

template <typename T1, typename T2>
bool chmin(T1 &a, const T2 &b) {
  if(a > b) {a = b; return true;}
  return false;
}

template<typename T1, typename T2>
ostream& operator<<(ostream &os, const pair<T1, T2> p) {
  os << p.first << ":" << p.second;
  return os;
}

template<class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  REP(i, SZ(v)) {
    if(i) os << " ";
    os << v[i];
  }
  return os;
}

int calc(string s) {
  int res = 0;
  res += 60 * 60 * ((s[0] - '0') * 10 + (s[1] - '0'));
  res += 60 * ((s[3] - '0') * 10 + (s[4] - '0'));
  res += (s[6] - '0') * 10 + (s[7] - '0');
  return res;
}

bool solve() {
  int n; cin >> n;
  if(n == 0) return false;

  vector<P> v;
  REP(i, n) {
    string l, r; cin >> l >> r;
    v.push_back({calc(l), calc(r)});
  }

  vector<int> imos(60 * 60 * 60+1, 0);
  REP(i, n) {
    imos[v[i].first]++;
    imos[v[i].second]--;
  }
  REP(i, SZ(imos)-1) {
    imos[i+1] += imos[i];
  }

  int ans = 0;
  REP(i, SZ(imos)-1) {
    chmax(ans, imos[i]);
  }
  cout << ans << endl;

  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  while(1) {
    if(!solve()) break;
  }

}























