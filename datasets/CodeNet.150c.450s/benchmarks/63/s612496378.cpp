#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>

#define MAXE 500000
#define MAXV 100000
#define INF 999999999

using namespace std;

struct edge {
  int to;
  int wt;
  int next;
} E[MAXE];

int LE[MAXV];
int dist[MAXV];
bool known[MAXV];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m, start;
  cin >> n >> m >> start;

  fill(LE, LE + MAXV, -1);
  fill(dist, dist + MAXV, INF);
  fill(known, known + MAXV, false);

  for (int i = 0, src, dst, cost; i < m; ++i) {
    cin >> src >> dst >> cost;
    E[i] = {dst, cost, LE[src]};
    LE[src] = i;
  }

  priority_queue<pair<int, int>> q;

  q.push({0, start});
  dist[start] = 0;

  int u, cost;
  while (!q.empty()) {
    tie(cost, u) = q.top();
    q.pop();
    if (known[u])
      continue;
    known[u] = true;
    for (int i = LE[u]; i != -1; i = E[i].next) {
      if (dist[E[i].to] > dist[u] + E[i].wt) {
        dist[E[i].to] = dist[u] + E[i].wt;
        q.push({-dist[E[i].to], E[i].to});
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    if (dist[i] == INF) {
      cout << "INF\n";
    } else {
      cout << dist[i] << endl;
    }
  }
}
