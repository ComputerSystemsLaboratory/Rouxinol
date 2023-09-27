#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
static const int NMAX = 100;
#define INF (1 << 30)
int ADJ[NMAX][NMAX];

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      ADJ[i][j] = INF;

  for (int i = 0; i < n; i++) {
    int id, nn;
    cin >> id  >> nn;
    for (int j = 0; j < nn; j++) {
      int to, weight;
      cin >> to >> weight;
      ADJ[id][to] = weight;
    }
  }

  bool visited[n];
  int dist[n];

  // add node 0
  for (int i = 0; i < n; i++) {
    dist[i] = ADJ[0][i];
    visited[i] = false;
  }
  visited[0] = true;
  dist[0] = 0;

  while (true) {
    int minnode = -1;
    int mincost = INF;
    // find nearest node
    for (int i = 0; i < n; i++) {
      if (visited[i] == false && dist[i] < mincost) {
        minnode = i;
        mincost = dist[i];
      }
    }
    if (minnode == -1)
      break;

    // add node
    visited[minnode] = true;

    // update dist
    for (int i = 0; i < n; i++) {
      if (visited[i] == false)
        dist[i] = min(dist[i], dist[minnode] + ADJ[minnode][i]);
    }
  }

  for (int i = 0; i < n; i++)
    cout << i << " " << dist[i] << endl;
}