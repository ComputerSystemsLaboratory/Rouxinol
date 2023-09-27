#include <iostream>
#include <vector>
#define MAX_E 2000
#define MAX_V 1000
#define INF 1000000
using namespace std;

typedef struct {
  int from, to, cost;
} edge;

edge es[MAX_E];

int d[MAX_V];

bool bellman_ford(int v, int e, int start) {
  d[start] = 0;
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < e; j++) {
      edge temp = es[j];
      if (d[temp.from] == INF) continue;
      if (d[temp.to] > d[temp.from] + temp.cost) {
	d[temp.to] = d[temp.from] + temp.cost;
	if (i == v - 1) return true;
      }
    }
  }
  return false;
}

void init() {
  for (int i = 0; i < MAX_V; i++) {
    d[i] = INF;
  }
}

int main() {
  int v, e, r;
  cin >> v >> e >> r;
  for (int i = 0; i < e; i++) {
    int s, t, d;
    cin >> s >> t >> d;
    edge temp;
    temp.from = s;
    temp.to = t;
    temp.cost = d;
    es[i] = temp;
  }

  init();

  if (bellman_ford(v, e, r) == true) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for (int i = 0; i < v; i++) {
    if (d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
  return 0;
}