#include <algorithm>
#include <vector>
#include <iostream>
#include <iomanip>
#include <map>
#include <queue>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#include <bitset>
#include <cstdint>
#include <unordered_map>
using namespace std;

using i64 = int64_t;
using ui64 = uint64_t;
using d64 = long double;

constexpr int MOD = 1000000000 + 7;
constexpr int INF = (1 << 30);
constexpr i64 INF64 = INT64_MAX;
const long double PI = 3.141592653589793;

template <typename T>
void print(const vector<T> vec) {
  for (auto &e : vec) {
    cout << e << " ";
  }
  cout << endl;
}

int next_combination(int sub) {
  int x = sub & -sub, y = sub + x;
  return (((sub & ~y) / x) >> 1) | y;
}

template <typename T>
vector<T> sieve(const T& n) {
  vector<bool> is_prime(n + 1, true);
  vector<i64> prime;
  is_prime[0] = is_prime[1] = false;
  for (T i = 2; i <= n; i++) {
    if (is_prime[i]) {
      prime.emplace_back(i);
      for (T j = 2 * i; j <= n; j += i) is_prime[j] = false;
    }
  }
  return prime;
}

template <typename T>
vector<T> dijkstra(vector<vector<pair<int, T>>> &G, int s, T INF) {
  vector<T> dist(G.size(), INF);

  using P = pair<int, T>;
  priority_queue<P, vector<P>, greater<P>> que;
  dist[s] = 0;
  que.emplace(s, dist[s]);
  while(!que.empty()) {
    int idx;
    T cost;
    tie(idx, cost) = que.top(); que.pop();
    if(dist[idx] < cost) continue;
    for(auto &e : G[idx]) {
      T next_cost = cost + e.second;
      if(dist[e.first] > next_cost) {
        dist[e.first] = next_cost;
        que.emplace(e.first, dist[e.first]);
      }
    }
  }
  return dist;
}


signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int v, e, r;
  cin >> v >> e >> r;
  vector<vector<pair<int, i64>>> G(v);
  for(int i=0; i<e; i++) {
    int s, t, d; cin >> s >> t >> d;
    G[s].emplace_back(t, d);
  }

  vector<i64> dist = dijkstra(G, r, INF64);
  for(auto &e : dist) {
    if(e == INF64) cout << "INF" << '\n';
    else cout << e << '\n';
  }
}
