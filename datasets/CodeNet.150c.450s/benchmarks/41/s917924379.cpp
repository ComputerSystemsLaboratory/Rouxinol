#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
#define MAX_V 100
#define INF LONG_MAX / 4
using namespace std;

typedef struct {
  int to, cost;
} edge;

vector<edge> G[MAX_V];
long long d[MAX_V][MAX_V];

bool find_negative_cycle(int v) {
  for (int i = 0; i < v; i++) {
    if (d[i][i] < 0) return true;
  }
  return false;
}

void warshall_floyd(int v) {
  for (int k = 0; k < v; k++) {
    for (int i = 0; i < v; i++) {
      if (d[i][k] == INF) continue;
      for (int j = 0; j < v; j++) {
	if (d[k][j] == INF) continue;
	d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}

void init(int v) {
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (i == j) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }
  
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < G[i].size(); j++) {
      d[i][G[i][j].to] = G[i][j].cost;
    }
  }
}

int main() {
  int v, e;
  cin >> v >> e;
  for (int i = 0; i < e; i++) {
    edge temp;
    int s, t, d;
    cin >> s >> t >> d;
    temp.to = t;
    temp.cost = d;
    G[s].push_back(temp);
  }

  init(v);
  warshall_floyd(v);

  if (find_negative_cycle(v) == true) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (INF - 20000000 <= d[i][j] && d[i][j] <= INF) {
	cout << "INF";
      } else {
	cout << d[i][j];
      }
      if (j < v - 1) {
	cout << ' ';
      } else {
	cout << endl;
      }
    }
  }

  return 0;
}