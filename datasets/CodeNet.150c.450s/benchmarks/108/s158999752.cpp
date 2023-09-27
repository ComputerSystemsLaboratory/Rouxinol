#include <iostream>
#include <queue>
#include <vector>

#define VISITED 1

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> D(n, 0);
  vector<vector<int> > graph(n);
  vector<int> dist(n, -1);
  queue<int> q;
  for(int i = 0; i < n; i++) {
    int u, k, v_i;
    cin >> u >> k;
    for(int j = 0; j < k; j++) {
      cin >> v_i;
      graph[u-1].push_back(v_i-1);
    }
  }
  q.push(0);
  D[0] = VISITED;
  dist[0] = 0;
  while(!q.empty()) {
    int id = q.front();
    q.pop();
    for(int i = 0; i < graph[id].size(); i++) {
      if(D[graph[id][i]] != VISITED) {
	dist[graph[id][i]] = dist[id] + 1;
	q.push(graph[id][i]);
	D[graph[id][i]] = VISITED;
      }
    }
  }

  for(int i = 0; i < n; i++) cout << i+1 << " " << dist[i] << endl;
  return 0;
}

    
  