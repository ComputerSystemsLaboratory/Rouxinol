#include <iostream>

using namespace std;

struct Edge {
  int s, t, d;
};

int V, E, r;
Edge Edges[500050];
int Cost[100010];
const int Inf = 10000*100000 + 100;

int main() {
  cin >> V >> E >> r;
  for(int i = 0; i < E; i++) cin >> Edges[i].s >> Edges[i].t >> Edges[i].d;
  for(int i = 0; i < V; i++) Cost[i] = Inf;
  Cost[r] = 0;
  for(int i = 0; i < V; i++) {
    bool update = false;
    for(int j = 0; j < E; j++) {
      int s = Edges[j].s, t = Edges[j].t, d = Edges[j].d;
      if(Cost[s] != Inf && Cost[t] > Cost[s]+d) {
	Cost[t] = Cost[s]+d;
	update = true;
      }
    }
    if(!update) break;
  }
  for(int i = 0; i < V; i++) {
    if(Cost[i] != Inf) cout << Cost[i] << endl;
    else cout << "INF" << endl;
  }
  return 0;
}

      