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
  int tmp;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> tmp;
      ADJ[i][j] = (tmp == -1) ? INF : tmp;
    }
  }

  bool visited[n];
  int edges[n];

  // add node 0
  for (int i = 0; i < n; i++) {
    edges[i] = ADJ[0][i];
    visited[i] = false;
  }
  visited[0] = true;

  int cost = 0;
  while (true) {
    int minnode = -1;
    int mincost = INF;
    // find min edge
    for (int i = 0; i < n; i++) {
      if (visited[i] == false && edges[i] < mincost) {
        minnode = i;
        mincost = edges[i];
      }
    }
    if (minnode == -1)
      break;

    // add node
    visited[minnode] = true;
    cost += mincost;

    // update connected edges
    for (int i = 0; i < n; i++) {
      edges[i] = min(edges[i], ADJ[minnode][i]);
    }
  }
  cout << cost << endl;
}