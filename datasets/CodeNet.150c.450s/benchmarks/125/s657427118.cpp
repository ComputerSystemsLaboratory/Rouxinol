#include <bits/stdc++.h>
using namespace std;

// repetition
#define FOR(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

// container util
#define all(x) (x).begin(), (x).end()

// typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;

// const value
// const ll MOD = 1e9 + 7;
// const int dx[] = {0,1,0,-1};//{0,0,1,1,1,-1,-1,-1};
// const int dy[] = {1,0,-1,0};//{1,-1,0,1,-1,0,1,-1};

// conversion
inline int toInt(string s) {
  int v;
  istringstream sin(s);
  sin >> v;
  return v;
}
inline ll toLL(string s) {
  ll v;
  istringstream sin(s);
  sin >> v;
  return v;
}
template <class T> inline string toString(T x) {
  ostringstream sout;
  sout << x;
  return sout.str();
}

template <typename T1, typename T2> inline bool chmax(T1 &a, T2 b) {
  return a < b && (a = b, true);
}

template <typename T1, typename T2> inline bool chmin(T1 &a, T2 b) {
  return a > b && (a = b, true);
}
VI edges[100];
int d[100];
int f[100];
int tern = 0;
void dfs(int c) {

  if(d[c] != 0)
    return;

  d[c] = tern;

  rep(i, edges[c].size()) {
    if(d[edges[c][i]] == 0) {
      tern++;
      dfs(edges[c][i]);
    }
  }
  tern++;
  // cout << c << ":" << tern << endl;
  f[c] = tern;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  rep(i, n) {
    int _, k, x;
    cin >> _ >> k;
    rep(j, k) {
      cin >> x;
      x--;
      edges[i].push_back(x);
    }
  }
  rep(i, n) {
    if(d[i] == 0) {
      tern++;
      dfs(i);
    }
  }

  rep(i, n) { cout << i + 1 << " " << d[i] << " " << f[i] << endl; }

  return 0;
}

