#include<iostream>

using namespace std;
#define MAX 100
#define INF 10000
int M[MAX][MAX];
int n;
int d[MAX];
int color[MAX];
int p[MAX];



int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> M[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    d[i] = INF;
    color[i] = 0;
  }

  int w = 0;
  d[0] = 0;
  while(true) {

    int com = INF;
    int u;
    for (int i = 0; i < n; i++) {
      if (color[i] != 2 && com > d[i] && d[i] != -1){
        com = d[i];
        u = i;
      }
    }

    if (com == INF) {
      break;
    }

    w += com;
    color[u] = 2;

    for (int j = 0; j < n; j++) {
      if (M[u][j] != -1 && M[u][j] < d[j] && color[j] != 2) {
        d[j] = M[u][j];
        p[j] = u;
      }
    }
  }

  cout << w << endl;
  return 0;
}