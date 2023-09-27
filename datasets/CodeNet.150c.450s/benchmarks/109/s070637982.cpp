#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <vector>
#include <string.h>
#include <set>
#include <stack>

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

const ll INF = 1e9;
const ll MOD = 1000000007;  // 1e9 + 7

ll to_i(string&s, int i1) {
  ll ret = 0;
  ret += (s[i1]-'0')*10;
  ret += (s[i1+1]-'0');
  return ret;
}

ll to_time(string& s) {
  ll hr = to_i(s,0);
  ll mn = to_i(s,3);
  ll sc = to_i(s,6);
  return hr*3600 + mn*60 + sc;
}

void solve(ll n) {
  vector<pair<string,string>> a(n); // pair of <start, end>
  rep(i,n) {
    cin >> a[i].first >> a[i].second;
  }
  vector<pair<ll,ll>> b(n); // pair of <end, start>
  rep(i,n) {
    b[i] = pair<ll,ll>(to_time(a[i].second), -to_time(a[i].first));
  }
  sort(all(b));

  map<ll,ll> mp; // collection of end time
  for (auto& p : b) {
    if (mp.empty()) {
      ++mp[p.first];
      continue;
    }
    // Here, mp is not empty

    auto it = mp.upper_bound(-p.second);
    // Here, prev(it) is insertion point.
    if (it == mp.begin()) { // Here, we can not use same train. Add new train.
      ++mp[p.first];
    } else { // Here, we can use prev(it) as same train.
      auto pit = prev(it);
      --(pit->second);
      if (pit->second == 0) { // count is 0
        mp.erase(pit);
      }
      ++mp[p.first];
    }
  }

  ll ans = 0;
  for (auto& p : mp) {
    ans += p.second;
  }
  cout << ans << endl;
}

int main(int argc, char** argv) {
  cin.tie(NULL);
  cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  //cout << setprecision(10) << fixed;

  while (true) {
    ll n;
    cin >> n;
    if (n == 0) { break; }
    solve(n);
  }
}

