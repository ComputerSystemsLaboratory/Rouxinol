#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <map>
using namespace std;

int V, E, R, S[500010], T[500010], D[500010];
priority_queue< pair<int ,int>, vector< pair<int, int> >, greater< pair<int, int> > > W;
int C[100010];
const int Inf = 10000*100000+100;

int main() {
  cin >> V >> E >> R;
  for (int i=0; i<E; ++i) {
    cin >> S[i] >> T[i] >> D[i];
  }

  vector< vector<int> > edges(V);
  for (int i=0; i<E; ++i) {
    edges[S[i]].push_back(i);
  }

  for (int i=0; i<V; ++i) {
    C[i] = Inf;
  }
  C[R] = 0;
  for (int i=0; i<V; ++i) {
    W.push(make_pair(C[i], i));
  }

  unordered_set<int> q, doubled;
  for (int i=0; i<V; ++i)
    q.insert(i);

  while (!q.empty()) {
    int u = W.top().second;
    W.pop();
    if (doubled.find(u) != doubled.end())
      continue;
    doubled.insert(u);
    q.erase(u);
    for (const auto& e : edges[u]) {
      int v = T[e];
      if (C[u] + D[e] < C[v] && q.find(v) != q.end()) {
        C[v] = C[u] + D[e];
        W.push(make_pair(C[v], v));
      }
    }
  }

  for (int t=0; t<V; ++t) {
    if (C[t] == Inf)
      cout << "INF" << endl;
    else
      cout << C[t] << endl;
  }
}