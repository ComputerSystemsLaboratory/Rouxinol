#include <iostream>
#include <vector>

#define rep(i,n)        for (int i = 0; i < (n); ++i)
#define all(a)          (a).begin(), (a).end()
#define sort(a)         sort(all(a))
#define uniq(a)         sort(a);(a).erase(unique(all(a)), (a).end())
#define reverse(a)      reverse(all(a))
#define ctos(c)         string(1, (c))
#define out(d)          cout << (d)
#define outl(d)         std::cout<<(d)<<"\n"
#define YES()           cout << "YES" << endl
#define NO()            cout << "NO" << endl
#define Yes()           cout << "Yes" << endl
#define No()            cout << "No" << endl
#define ceil(x, y)      ((x + y - 1) / (y))
#define debug(x)        cerr << #x << ": " << (x) << '\n'
#define debug2(x, y)    cerr << #x << ": " << (x) << ", " << #y << ": " << (y) << '\n'
#define debug3(x, y, z) cerr << #x << ": " << (x) << ", " << #y << ": " << (y) << ", " << #z << ": " << (z) << '\n'
#define dbg(v)          for (size_t _ = 0; _ < v.size(); ++_){ cerr << #v << "[" << _ << "] : " << v[_] << '\n'; }
#define pb              push_back
#define fst             first
#define int             long long
#define INF             __LONG_LONG_MAX__

using namespace std;
using ll = long long;
using P = pair<ll,ll>;

vector<ll> L, R;

ll merge(vector<ll> &a, ll left, ll mid, ll right) {
  ll n = a.size();
  ll n1 = mid - left;
  ll n2 = right - mid;
  rep(i, n1) L[i] = a[left + i];
  rep(i, n2) R[i] = a[mid + i];
  L[n1] = R[n2] = INF;

  ll li = 0, ri = 0, ret = 0;
  for (ll i = left; i < right; i++) {
    if (L[li] <= R[ri]) {
      a[i] = L[li++];
    } else {
      a[i] = R[ri++];
      ret += n1 - li;
    }
  }
  return ret;
}

ll merge_sort(vector<ll> &a, ll left, ll right) {
  if (right - left > 1) {
    ll mid = (left + right) / 2;
    ll v1 = merge_sort(a, left, mid);
    ll v2 = merge_sort(a, mid, right);
    ll v3 = merge(a, left, mid, right);
    return v1 + v2 + v3;
  } else {
    return 0;
  }
}

ll inversion_number(vector<ll> &a) {
  ll n = a.size();
  L.resize(n / 2 + 2);
  R.resize(n / 2 + 2);

  return merge_sort(a, 0, n);
}

void solve() {
  ll n; cin >> n;
  vector<ll> a(n); rep(i, n) cin >> a[i];

  outl(inversion_number(a));
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  solve();
}

