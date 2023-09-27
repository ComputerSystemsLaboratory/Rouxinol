#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

#define N 10001
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define IFNTY 1 << 21

vector<pair<int, int> > G[N];
int color[N], d[N], p[N];

int pirm (int n) {
  priority_queue<pair<int, int> > PQ;
  int mincost, u;

  for (int i = 0; i < n; i++) {
    color[i] = WHITE;
    d[i] = IFNTY;
  }

  d[0] = 0;
  p[0] = -1;
  PQ.push(make_pair(0, 0));

  while (PQ.size()) {
    mincost = PQ.top().first * -1;
    u = PQ.top().second;
    PQ.pop();

    color[u] = BLACK;

    for (int j = 0; j < G[u].size(); j++) {
      pair<int, int> v = G[u][j];
      if (color[v.second] != BLACK && v.first < d[v.second]) {
        d[v.second] = v.first;
        p[v.second] = u;
        PQ.push(make_pair(v.first * -1, v.second));
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
    ans += d[i];
  return ans;
}

int main () {
  int V, E;

  cin >> V >> E;

  int s, d, c;

  for (int i = 0; i < E; i++) {
    cin >> s >> d >> c;
    G[s].push_back(make_pair(c, d));
    G[d].push_back(make_pair(c, s));
  }

  cout << pirm(V) << endl;

  return 0;
}
