#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rep(i, n)    FOR(i, 0, n)
#define pb           push_back
#define all(a)       (a).begin(), (a).end()
#define UNIQUE(v)    v.erase(unique(all(v)), v.end());
#define fill(a, x)   memset(a, x, sizeof(a))
#define zero(a)      fill(a, 0)
#define minus(a)     fill(a, -1)
#define dbg(x)       cout << #x "=" << x << endl

int n;
int k;
vector<ll> vc_a;

int check(ll P) {
  int i = 0;
  rep(j, k) {
    ll s = 0;
    while (s + vc_a[i] <= P) {
      s += vc_a[i];
      i++;
      if (i == n) return n;
    }
  }
  return i;
}

int solve() {
  ll left = 0;
  ll right = 100000 * 10000;
  ll mid;
  while (right - left > 1) {
    mid = (left + right) / 2;
    int v = check(mid);
    if (v >= n)
      right = mid;
    else
      left = mid;
  }
  return right;
}

int main() {
  ios::sync_with_stdio(false);
  int c = 0;
  cin >> n;

  cin >> k;

  ll min = 0;
  // receiving input
  while (c < n) {
    ll tmp;
    cin >> tmp;
    vc_a.pb(tmp);
    c++;
  }

  min = solve();

  cout << min << endl;

  return 0;
}

