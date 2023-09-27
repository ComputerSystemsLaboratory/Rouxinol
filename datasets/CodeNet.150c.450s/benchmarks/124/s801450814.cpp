#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_VERTEX 100
#define INF 1000000

int d[MAX_VERTEX][MAX_VERTEX];

int main() {
  int vertex_num;
  cin >> vertex_num;

  for(int i = 0; i < vertex_num; i++) {
    for(int j = 0; j < vertex_num; j++) {
      if (i == j) d[i][i] = 0;
      else d[i][j] = INF;
    }
  }

  for (int i = 0; i < vertex_num; i++) {
    int vertex, out;
    cin >> vertex >> out;
    for(int j = 0; j < out; j++) {
      int to, c;
      cin >> to >> c;
      d[vertex][to] = c;
    }
  }

  for (int k = 0; k < vertex_num; k++) {
    for (int i = 0; i < vertex_num; i++) {
      for (int j = 0; j < vertex_num; j++) {
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }

  for(int i = 0; i < vertex_num; i++) {
    cout << i << " " << d[0][i] << endl;
  }

  return 0;
}