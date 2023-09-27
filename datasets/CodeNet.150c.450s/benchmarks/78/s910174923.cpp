#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;

using namespace std;
using ll = long long int;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using vvvl = vector<vector<vector<ll>>>;

typedef pair<ll, ll> pll;
bool paircomp(const pll &a, const pll &b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first < b.first;
}
struct multi {
  ll first;
  ll second;
  ll third;
};
bool multicomp(const multi &a, const multi &b) {
  if (a.first == b.first)
    return a.second < b.second;
  return a.first < b.first;
}
#define REP(i, n) for (ll i = 0; i < (n); i++)
#define RREP(i, n) for (ll i = (n)-1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define AUTO(i, m) for (auto &i : m)
#define ALL(a) (a).begin(), (a).end()
#define MAX(vec) *std::max_element(vec.begin(), vec.end())
#define MIN(vec) *std::min_element(vec.begin(), vec.end())
#define ARGMAX(vec)                                                            \
  std::distance(vec.begin(), std::max_element(vec.begin(), vec.end()))
#define ARGMIN(vec)                                                            \
  std::distance(vec.begin(), std::min_element(vec.begin(), vec.end()))
#define REV(T) greater<T>()
#define PQ(T) priority_queue<T, vector<T>, greater<T>>
#define VVL(a, b, c) vector<vector<ll>>(a, vector<ll>(b, c))
#define VVVL(a, b, c, d)                                                       \
  vector<vector<vector<ll>>>(a, vector<vector<ll>>(b, vector<ll>(c, d)))
#define SP(a) setprecision(a)
#define SQRT(a) sqrt((long double)(a))
#define DPOW(a, b) pow((long double)(a), (long double)(b))
#define UNIQUE(vec)                                                            \
  do {                                                                         \
    sort(ALL((vec)));                                                          \
    (vec).erase(std::unique(ALL((vec))), (vec).end());                         \
  } while (0)

ll POW(ll n, ll m) {
  if (m == 0) {
    return 1;
  } else if (m % 2 == 0) {
    ll tmp = POW(n, m / 2);
    return (tmp * tmp);
  } else {
    return (n * POW(n, m - 1));
  }
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vl func(vl &kouho, ll c) {
  vl DP(c + 1, llINF);
  vl prev(c + 1, llINF);
  DP[0] = 0;
  while (true) {
    prev = DP;
    AUTO(a, kouho) {
      REP(i, c - a + 1) {
        if (prev[i] < llINF)
          DP[i + a] = min(prev[i] + 1, prev[i + a]);
      }
    }
    bool ok = true;
    REP(i, c) if (DP[i] == llINF) ok = false;
    if (ok)
      break;
  }
  return DP;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vl all;
  vl odd;
  ll score = 0;
  ll i = 1;
  vector<pll> ans;
  while (score < 1e6 + 1) {
    score = (i * (i + 1) * (i + 2)) / 6;
    if (score % 2 == 1)
      odd.push_back(score);
    all.push_back(score);
    i++;
  }
  sort(ALL(odd), REV(ll));
  sort(ALL(all), REV(ll));

  vl odd_ = func(odd, 1e6);
  vl all_ = func(all, 1e6);

  while (true) {
    ll n;
    cin >> n;
    if (n == 0)
      break;
    cout << all_[n] << " " << odd_[n] << endl;
  }

  // AUTO(a, ans) { cout << a.first << " " << a.second << endl; }
  return 0;
}

