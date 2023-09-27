#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define INF 1e9
typedef pair<int, int> pi;
int graph[200][200];
int used[200];
int dist[200];
// first:weight, second:key
priority_queue<pi, vector<pi>, greater<pi>> pqueue;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    dist[i] = INF;
    for (int j = 0; j < n; j++) {
      graph[i][j] = -1;
    }
  }
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    int v, c;
    for (int j = 0; j < k; j++) {
      cin >> v;
      cin >> graph[u][v]; 
    }
  }
  
  pqueue.push(make_pair(0,0));
  dist[0] = 0;
  for (int i = 0; i < n; i++) {
    pi p = pqueue.top();
    pqueue.pop();
    int key = p.second;
    if (used[key] == 1) {
      i--;
      continue;
    }
    dist[key] = min(p.first, dist[key]);
    used[key] = 1;
    for (int j = 0; j < n; j++) {
      if (graph[key][j] != -1 && used[j] != 1) {
        int d = graph[key][j] + dist[key];
        pqueue.push(make_pair(d, j));
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << i << " " << dist[i] << endl;
  }
}


