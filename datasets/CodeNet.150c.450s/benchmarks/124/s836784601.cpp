#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <vector>

// Acknowledgement: Special thanks to kyomukyomupurin, who developed this
// template.
template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
  int n = 0;
  for (auto e : vec) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& st) {
  int n = 0;
  for (auto e : st) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::map<T, U>& mp) {
  int n = 0;
  for (auto e : mp) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
  for (T& e : vec) is >> e;
  return is;
}

#ifdef LOCAL
#define debug(...) \
  std::cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

void debug_out() { std::cerr << '\n'; }

template <class Head, class... Tail>
void debug_out(Head&& head, Tail&&... tail) {
  std::cerr << head;
  if (sizeof...(Tail) != 0) std::cerr << ", ";
  debug_out(std::forward<Tail>(tail)...);
}
using namespace std;
using int64 = long long;

const int VERY_LARGE_NUM = 1e8;

void dijkstra(int start_node_id, int size, const vector<vector<int>>& g,
              vector<int>& color, vector<int>& d) {
  d[start_node_id] = 0;
  color[start_node_id] = 1;
  while (1) {
    int min_cost = VERY_LARGE_NUM;
    int u = -1;
    for (int i = 0; i < size; i++) {
      if (color[i] != 2 && d[i] < min_cost) {
        min_cost = d[i];
        u = i;
      }
    }
    if (u == -1) break;
    color[u] = 2;
    for (int i = 0; i < size; i++) {
      if (g[u][i] > 0 && color[i] != 2) {
        if (d[i] > d[u] + g[u][i]) {
          d[i] = d[u] + g[u][i];
          color[i] = 1;
        }
      }
    }
  }
}

int main() {
  int n, u, k, c, v;
  cin >> n;
  vector<vector<int>> g(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v >> c;
      g[u][v] = c;
    }
  }
  debug(g);
  vector<int> color(n);
  vector<int> d(n, VERY_LARGE_NUM);
  dijkstra(0, n, g, color, d);
  for (int i = 0; i < n; i++) {
    cout << i << ' ' << d[i] << endl;
  }
  return 0;
}
