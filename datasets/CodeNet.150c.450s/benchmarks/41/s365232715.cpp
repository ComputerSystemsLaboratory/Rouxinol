#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string.h>
#include <set>

using namespace std;

#define COUT(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl

template<class T> void printvec(const vector<T>& v) {
  for (auto x : v) { cout << x << " "; }
  cout << endl;
}
template<class T> void printtree(const vector< vector<T> >& tree) {
  for (long long i = 0; i < tree.size(); ++i) {
    cout << i + 1 << ": "; printvec(tree[i]);
  }
}
template<class T, class U> void printmap(const map<T, U>& mp) {
  for (auto x : mp) { cout << x.first << "=>" << x.second << endl; }
}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

#define rep(i, n) for(ll i = 0; i < n; ++i)
#define all(s) s.begin(), s.end()
#define sz(x) (ll)(x).size()
#define fr first
#define sc second
#define mp make_pair
#define pb push_back
#define eb emplace_back

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> triple;
typedef double D;
typedef vector<ll> vl;
typedef vector<P> vp;

const ll INF = 1e15;
const ll MOD = 1000000007;  // 1e9 + 7

const ll N = 105;

ll d[N][N];

int main(int argc, char** argv) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  //cout << setprecision(10) << fixed;

  ll n, m;
  cin >> n >> m;
  rep(i,n)rep(j,n) { d[i][j] = INF; }
  rep(i,n) { d[i][i] = 0; }

  rep(iter,m) {
    ll s,t,cost;
    cin >> s >> t >> cost;
    d[s][t] = cost;
  }

  // WarshalFloyd
  rep(k, n) {
    rep(i, n) {
      rep(j, n) {
        if (d[i][k] == INF || d[k][j] == INF) { continue; }
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  // Check the presence of negative cycle
  rep(i,n) {
    if (d[i][i] < 0) { // negative cycle
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  rep(i,n)rep(j,n) {
    if (d[i][j] == INF) {
      cout << "INF";
    } else {
      cout << d[i][j];
    }
    if (j<n-1) {
      cout << " ";
    } else {
      cout << endl;
    }
  }
}

