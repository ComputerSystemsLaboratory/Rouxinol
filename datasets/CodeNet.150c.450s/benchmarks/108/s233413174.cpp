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

void bfs(int start_node_id, const vector<vector<int>>& g,
         vector<int>& visit_status, vector<int>& distance, vector<int>& parent,
         int col = 1) {
  int node_id;
  queue<int> q;
  visit_status[start_node_id] = col;
  distance[start_node_id] = 0;
  q.push(start_node_id);
  while (!q.empty()) {
    node_id = q.front();
    q.pop();
    for (int i = 0; i < (int)g[node_id].size(); i++) {
      int next_node_id = g[node_id][i];
      if (visit_status[next_node_id] == 0) {
        q.push(next_node_id);
        visit_status[next_node_id] = col;
        distance[next_node_id] = distance[node_id] + 1;
        parent[next_node_id] = node_id;
      }
    }
    visit_status[node_id] = col;
  }
}

int main() {
  int n, k, u, v;
  cin >> n;
  vector<vector<int>> g(n);
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v;
      g[i].push_back(v - 1);
    }
  }
  debug(g);
  vector<int> visit_status(n), distance(n, -1), parent(n);
  bfs(0, g, visit_status, distance, parent);
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ' ' << distance[i] << endl;
  }
  return 0;
}
