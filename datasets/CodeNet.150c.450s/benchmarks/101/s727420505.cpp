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

const int MAX_N = 1e5;
vector<int> G[MAX_N];

void bfs(int start_node_id, vector<int>& color, int col) {
  int u;
  queue<int> q;
  color[start_node_id] = col;
  q.push(start_node_id);
  while (!q.empty()) {
    u = q.front();
    q.pop();
    for (int i = 0; i < G[u].size(); i++) {
      int v = G[u][i];
      if (color[v] == 0) {
        q.push(v);
        color[v] = col;
      }
    }
    color[u] = col;
  }
}

int main() {
  int n, m, q, s, t;
  cin >> n >> m;
  // vector<int> emp = {};
  // vector<vector<int>> G(n, emp);
  for (int i = 0; i < m; i++) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }
  vector<int> color(n);
  int col = 1;
  for (int i = 0; i < n; i++) {
    if (color[i] == 0) {
      bfs(i, color, col);
      col++;
    }
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> s >> t;
    if (color[s] == color[t]) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}
