#include <iostream>
#include <queue>
#include <vector>
#define MAX_V 100000
#define INF 2000000000
using namespace std;

typedef struct {
  int to, cost;
} edge;

typedef pair<int, int> P;

vector<edge> G[MAX_V];
int d[MAX_V];

void init() {
  for (int i = 0; i < MAX_V; i++) {
    d[i] = INF;
  }
}

void dijkstra(int start) {
  priority_queue<P, vector<P>, greater<P> > que;
  init();
  d[start] = 0;
  que.push(P(0, start));

  while (que.empty() == false) {
    P temp = que.top();
    que.pop();

    int v = temp.second;
    if (d[v] < temp.first) continue;

    for (int i = 0; i < G[v].size(); i++) {
      edge e = G[v][i];
      if (d[e.to] > d[v] + e.cost) {
	d[e.to] = d[v] + e.cost;
	que.push(P(d[e.to], e.to));
      }
    }
  }
}

int main() {
  int v, e, r;
  cin >> v >> e >> r;

  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    edge temp;
    temp.to = t;
    temp.cost = d;
    G[s].push_back(temp);
  }

  dijkstra(r);

  for (int i = 0; i < v; i++) {
    if (d[i] < INF) cout << d[i] << endl;
    else cout << "INF" << endl;
  }

  return 0;
}