#pragma region header
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define int long long
#define all(a) begin(a), end(a)
#define rall(a) rbegin(a), rend(a)
#define mp make_pair
#define mt make_tuple
#define rep1(i, n) for (decltype(+n) i = 0; i < (n); i++)
#define rrep1(i, n) for (auto i = n - 1; i != static_cast<decltype(i)>(-1); i--)
#define rep2(i, a, b) for (auto i = (a); i < (b); i++)
#define rrep2(i, a, b) for (auto i = b - 1; i >= a; i--)
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define rep(...) GET_MACRO(__VA_ARGS__, rep2, rep1) (__VA_ARGS__)
#define rrep(...) GET_MACRO(__VA_ARGS__, rrep2, rrep1) (__VA_ARGS__)
#define each(i, a) for (auto &&i : (a))
#define split_pair(f, s, p) auto f = p.first; auto s = p.second
using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vvvs = vector<vvs>;
using vd = vector<ld>;
using vvd = vector<vd>;
using vvvd = vector<vvd>;
using vb = vector<bool>;
using vvb = vector<vb>;
using vvvb = vector<vvb>;
using pii = pair<int, int>;
using vp = vector<pii>;
using vvp = vector<vp>;
using vvvp = vector<vvp>;
using mii = map<int, int>;
using vm = vector<mii>;
using vvm = vector<vm>;
using vvvm = vector<vvm>;

const int INF = 1e18;
const int MOD = 1e9 + 7;
int mod(int a) { return (a % MOD + MOD) % MOD; }
int m_add(int a, int b) { return (a + b) % MOD; }
int m_add(int a, int b, int c) { return (a + b + c) % MOD; }
int m_sub(int a, int b) { return (a + MOD - b) % MOD; }
int m_mul(int a, int b) { return a * b % MOD; }
int m_mul(int a, int b, int c) { return a * b % MOD * c % MOD; }
int m_bipow(int x, int y) {
  if (y == 0) return 1;
  else if (y == 1) return x % MOD;
  else if (y % 2 == 0) {
    int z = m_bipow(x, (int)(y / 2));
    return m_mul(z, z);
  } else {
    int z = m_bipow(x, (int)(y / 2));
    return m_mul(z, z, x);
  }
}
int m_inv(int x) { return m_bipow(x, MOD - 2); }
int m_div(int a, int b) { return m_mul(a, m_inv(b)); }

template <class T>
void SORT(T &a) { stable_sort(all(a)); }
template <class T>
void RSORT(T &a) { stable_sort(rall(a)); }
template <class T>
void rev(T &a) { reverse(rall(a)); }
template <class T>
void uniq(T &a) { a.erase(unique(all(a)), end(a)); }
template <class T>
auto min_of(T a) { return *min_element(all(a)); }
template <class T>
auto max_of(T a) { return *max_element(all(a)); }
template <class T>
int sum_of(T a) { return accumulate(all(a), 0ll); }
template <class T, class U>
auto sum_of(T a, U init) { return accumulate(all(a), init); }
template <class T, class U>
int count_of(T a, U i) { return count(all(a), i); }
template <class T, class U>
int lower_index(T a, U i) { return lower_bound(all(a), i) - begin(a); } // use member func for set
template <class T, class U>
int upper_index(T a, U i) { return upper_bound(all(a), i) - begin(a); }
template <class T, class U>
bool binary(T a, U i) { return binary_search(all(a), i); }
template <class T, class U>
bool exists(T a, U i) { return find(all(a), i) != end(a); }
template <class T>
int sz(T a) { return a.size(); };

template <class T>
void COUT(T x) { cout << x << endl; }
template <class T, class U>
void COUT(T x, U y) { cout << x << ' ' << y << endl; }
template <class T, class U, class V>
void COUT(T x, U y, V z) { cout << x << ' ' << y << ' ' << z << endl; }
template <class T>
void CSP(T x) { cout << x << ' '; }
template <class T>
void CVEC(T v) {
  int c = v.size() - 1;
  for (size_t i = 0; i < c; i++) cout << v[i] << ' ';
  if (c > -1) cout << v[c];
  cout << endl;
}

template <class T>
bool amin(T &a, const T &b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
bool amax(T &a, const T &b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

template <class T>
vector<pair<T, int>> indexed_vector(vector<T> v) {
  int n = sz(v);
  vector<pair<T, int>> w(n);
  for (int i = 0; i < n; i++) w[i] = make_pair(v[i], i);
  return w;
}
template <class T, class S>
vector<pair<T, S>> zip(vector<T> v, vector<S> w) {
  int n = min(sz(v), sz(w));
  vector<pair<T, S>> x(n);
  for (int i = 0; i < n; i++) x[i] = make_pair(v[i], w[i]);
  return x;
}
template <class T, class S>
pair<vector<T>, vector<S>> unzip(vector<pair<T, S>> v) {
  int n = sz(v);
  auto w = make_pair(vector<T>(n), vector<S>(n));
  for (int i = 0; i < n; i++) {
    w.first[i] = v[i].first;
    w.second[i] = v[i].second;
  }
  return w;
}

vs split(const string &s, string d) {
  vs elms;
  size_t offset = 0, d_size = d.size();
  while (true) {
    size_t next = s.find_first_of(d, offset);
    if (next == string::npos) {
      elms.push_back(s.substr(offset));
      return elms;
    }
    elms.push_back(s.substr(offset, next - offset));
    offset = next + d_size;
  }
}
vs split(const string &s, char d) { return split(s, string(1, d)); }
string join(const vs &v, const string d = "") {
  string s;
  if (!v.empty()) {
    s += v[0];
    for (size_t i = 1, c = v.size(); i < c; ++i) {
      if (!d.empty()) s += d;
      s += v[i];
    }
  }
  return s;
}
string join(const vs &v, const char d) { return join(v, string(1, d)); }string pad_left(string s, int width, char filler = '0') {
  int n = sz(s);
  if(n > width) return s.substr(n - width);
  return string(width - n, filler) + s;
}

int ceil_div(int x, int y) { return (x - 1) / y + 1; }

#pragma endregion header

// MOD = 1e9 + 7;


void solve() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n)cin >> a[i];
  string s;
  cin >> s;
  vi v;
  rrep(i, n) {
    each(x, v)amin(a[i], a[i] ^ x);
    v.push_back(a[i]);
    if (a[i] > 0 && s[i] == '1') {
      COUT(1);
      return;
    }
  }
  COUT(0);
}


// Failed to predict input format
#pragma region main
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout << fixed << setprecision(15);

  int t;
  cin >> t;
  rep(_, t) solve();
}
#pragma endregion main
