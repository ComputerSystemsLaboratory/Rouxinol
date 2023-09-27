#include<iostream>
#include<string>
using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
const int VMAX = 106, EMAX = 10000;
const long long int INF = 100000000000;

long long int dist[VMAX][VMAX];

void init(int V) {
  REP(j, V) REP(i, V) {
    dist[i][j] = (i == j ? 0 : INF);
  }
}

void wf(int V) {
  REP(k, V) REP(i, V) REP(j, V) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }
}

bool has_negcycle(int V) {
  REP(i, V) {
    if (dist[i][i] < 0) return true;
  }
  return false;
}

int main() {
  int V, E;
  cin >> V >> E;
  
  init(V);
  REP(i, E) {
    int s, t, d;
    cin >> s >> t >> d;
    dist[s][t] = d;
  }
  wf(V);
  
  if (has_negcycle(V)) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    REP(i, V) {
      REP(j, V) {
        if (dist[i][j] >= INF / 2) {
          cout << "INF";
        } else if (dist[i][j] == 0) {
          cout << 0;
        } else {
          cout << dist[i][j];
        }
        if (j < V - 1) cout << " ";
      }
      cout << endl;
    }
  }
}