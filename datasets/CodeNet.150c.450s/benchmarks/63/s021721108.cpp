#include <bits/stdc++.h>
/* #include <iostream> */
/* #include <vector> */

using namespace std;
using pii = pair<int, int>;

const int INF = 1e9 + 10;

template <typename itr> void output(itr first, itr last) {
  for (auto iter = first; iter != last; ++iter) {
    for (int i : *iter) {
      if (i == INF)
        cerr << "INF"
             << ", ";
      else
        cerr << i << ", ";
    }
    cerr << endl;
  }
  cerr << endl;
}

int main() {
  int V, E, r;
  cin >> V >> E >> r;
  vector<int> C(V, INF); // tmp
  vector<int> ans(V, INF);
  // <distance, node>
  vector<vector<pii>> dests(V);
  priority_queue<pii, vector<pii>, greater<pii>> pQ;
  C[r] = 0;
  pQ.push(make_pair(0, r));
  for (int i = 0; i < E; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    dests[s].push_back(make_pair(d, t));
  }
  while (!pQ.empty()) {
    pii smallest = pQ.top();
    pQ.pop();
    if (ans[smallest.second] == INF) {
      ans[smallest.second] = smallest.first;
      for (pii dest : dests[smallest.second]) {
        C[dest.second] = min(C[dest.second], C[smallest.second] + dest.first);
        pQ.push(make_pair(C[dest.second], dest.second));
      }
    }
  }
  for (int i : ans) {
    if (i == INF)
      cout << "INF" << endl;
    else
      cout << i << endl;
  }
}

