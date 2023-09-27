#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <array>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cassert>
#include <utility>
#include <functional>

using namespace std;
using lli = long long int;
template<class T, class U> void init_n(vector<T>& v, size_t n, U x) 
{ v = vector<T>(n, x); }
template<class T> void init_n(vector<T>& v, size_t n) { init_n(v, n, T()); }
template<class T> void read_n(vector<T>& v, size_t n, size_t o = 0) 
{ v = vector<T>(n+o); for (lli i=o; i<n+o; ++i) cin >> v[i]; }
template<class T> void read_n(T a[], size_t n, size_t o = 0)
{ for (lli i=o; i<n+o; ++i) cin >> a[i]; }
template<class T> T gabs(const T& x) { return max(x, -x); }
#define abs gabs

lli sv, se, r;
using E = pair<lli, lli>;
vector<E> e[100001];
lli d[100001];
bool fix[100001];
int main() {
  cin >> sv >> se >> r;
  for (lli i=0; i<se; ++i) {
    lli u, v, d; cin >> u >> v >> d;
    e[u].emplace_back(d, v);
  }

  fill(begin(d), end(d), 1e15);
  d[r] = 0;
  using V = pair<lli, lli>;
  priority_queue<V, vector<V>, greater<V>> pq;
  pq.emplace(0, r);
  while (!pq.empty()) {
    V p = pq.top(); pq.pop();
    lli c = p.first, u = p.second;
    if (fix[u]) continue;
    fix[u] = true;

    for (const E& q : e[u]) {
      lli a = q.first, v = q.second;
      if (!fix[v] && c + a < d[v]) {
        d[v] = c + a;
        pq.emplace(c + a, v);
      }
    }
  }

  for (lli i=0; i<sv; ++i) {
    if (fix[i]) cout << d[i] << '\n';
    else cout << "INF\n";
  }
  return 0;
}

