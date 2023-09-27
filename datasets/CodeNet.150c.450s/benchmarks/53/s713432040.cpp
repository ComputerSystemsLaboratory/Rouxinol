#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ld> vld;
typedef vector<vld> vvld;

typedef pair<ll, ll> P;

#define bit(n) (1LL << (n))

//#define int long long

#define all(v) v.begin(), v.end()

#define rep(i, n) for (ll i = 0; i < n; i++)
#define REP(i, n) for (ll i = 1; i < n; i++)

#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define FORm(i, m) for (auto i = m.begin(); i != m.end(); i++)

template <class T>
inline void chmax(T& a, T b) {
  a = std::max(a, b);
}
template <class T>
inline void chmin(T& a, T b) {
  a = std::min(a, b);
}

#define mod (ll)(1e9 + 7)
// #define mod (998244353ll)

const long long INF = 1LL << 60;

bool is_prime(const unsigned n) {
  if (n % 2 == 0 || n % 3 == 0) {
    if (n == 2 || n == 3) {
      return true;
    }
    return false;
  }
  if (n == 1) {
    return false;
  }

  for (unsigned i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }

  return true;
}

// prime factorization (素因数分解)
// key: value of prime factor
// value: number of prime factor
std::map<ll, ll> prime_factorization(ll n) {
  std::map<ll, ll> prime_factors;
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      prime_factors[i]++;
      n /= i;
    }
  }
  if (n != 1)
    prime_factors[n] = 1;
  return prime_factors;
}

// 約数リスト
vector<ll> get_divisors(const ll n) {
  vector<ll> divs;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      divs.push_back(i);
      if (i != n / i) {
        divs.push_back(n / i);
      }
    }
  }

  // 必要に応じてソート
  // sort(divs.begin(), divs.end());

  return divs;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);

  ll n;
  cin >> n;
  cout << n << ":";

  std::map<ll, ll> factors = prime_factorization(n);

  for (pair<ll, ll> it : factors) {
    rep(i, it.second) {
      cout << " " << it.first;
    }
  }

  cout << endl;

  return 0;
}

