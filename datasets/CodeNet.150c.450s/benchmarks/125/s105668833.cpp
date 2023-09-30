#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) \
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

constexpr auto no_value = numeric_limits<uint64_t>::max();

struct GraphParser {
  GraphParser(vector<vector<int>>& edges_)
      : edges(edges_), start(edges.size(), 0), end(edges.size(), 0) {
  }

  void run() {
    t = 0;
    for (size_t i = 0; i < edges.size(); ++i) {
      if (!start[i]) {
        recur(i);
      }
    }
  }

  void run_stack() {
    t = 0;
    for (size_t j = 0; j < edges.size(); ++j) {
      if (start[j]) continue;
      start[j] = ++t;
      st.push(make_pair(j, 0));
      while(!st.empty()) {
        auto& p = st.top();
        auto v = p.first;
        auto& i = p.second;
        if (i < edges[v].size()) {
          auto v2 = edges[v][i++];
          if (!start[v2]) {
            start[v2] = ++t;
            st.push(make_pair(v2, 0));
          }
        } else {
          end[v] = ++t;
          st.pop();
        }
      }
    }
  }

  vector<vector<int>>& edges;
  vector<int> start;
  vector<int> end;
  stack<pair<int, size_t>> st;
  int t;

 private:
  void recur(int cur) {
    if (start[cur]) {
      return;
    }
    start[cur] = ++t;
    for (auto&& e : edges[cur]) {
      recur(e);
    }
    end[cur] = ++t;
  }
};

int main() {
  int n;
  cin >> n;
  vector<vector<int>> edges(n, vector<int>());
  for (int i = 0; i < n; ++i) {
    int u;
    int k;
    cin >> u >> k;
    edges[u - 1].reserve(k);
    for (int j = 0; j < k; ++j) {
      int v;
      cin >> v;
      edges[u - 1].push_back(v - 1);
    }
  }

  GraphParser p(edges);
  p.run_stack();
  for (int i = 0; i < n; ++i) {
    cout << (i + 1) << " " << p.start[i] << " " << p.end[i] << endl;
  }
}