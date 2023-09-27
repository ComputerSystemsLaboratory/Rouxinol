#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back

typedef long long LL;
typedef long double LD;

const LL INF = (1LL << 60);

const int MAXN = 105;
bool floyd_warshall(int n, LL adjMat[MAXN][MAXN], int parent[MAXN][MAXN]);

int main() {

  ios_base::sync_with_stdio(0); cin.tie(0);

  int n, m;
  cin >> n >> m;

  LL adjMat[MAXN][MAXN]; int parent[MAXN][MAXN];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        adjMat[i][j] = 0;
      else
        adjMat[i][j] = INF;
    }
  }

  for (int i = 0; i < m; i++) {
    int s, t; LL d;
    cin >> s >> t >> d;

    adjMat[s][t] = d;
  }

  bool has_negative_cycle = floyd_warshall(n, adjMat, parent);

  if (has_negative_cycle) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j > 0)
          cout << " ";
        if (adjMat[i][j] == INF)
          cout << "INF";
        else
          cout << adjMat[i][j];
      } cout << endl;
    }
  }

  return 0;
}

/*
 * @param n: number of nodes
 * @param adjMat[][]: adjacency matrix representation of the graph
 *                    mark adjMat[u][v] to INF if no edge exist between them
 * 
 * @return adjMat[u][v]: shortest path between u and v 
 * @return parent[u][v]: parent of v in shortest path u->v
 *
 * tested on 
 */
bool floyd_warshall(int n, LL adjMat[MAXN][MAXN], int parent[MAXN][MAXN]) {
  for (int k = 0; k < n; k++) 
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        if (adjMat[i][k] != INF && adjMat[k][j] != INF && adjMat[i][j] > adjMat[i][k] + adjMat[k][j])
            adjMat[i][j] = adjMat[i][k] + adjMat[k][j], parent[i][j] = parent[k][j];

  bool has_negative_cycle = false;
  for (int k = 0; k < n; k++) 
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        if (adjMat[i][k] != INF && adjMat[k][j] != INF && adjMat[i][j] > adjMat[i][k] + adjMat[k][j])
            has_negative_cycle = true;

  return has_negative_cycle;
}
