#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

const int MAX_M = 10; // 町の数
const int INF = 100000000;
Matrix d; // グラフの距離を格納した2次元配列（隣接行列）
          // d[u][v]は辺e=(u,v)のコスト（辺が存在しない場合はINF、ただしd[i][i]=0）

void warshall_floyd(int n) { // nは頂点数
  for (int i = 0; i < n; i++)      // 経由する頂点
    for (int j = 0; j < n; j++)    // 開始頂点
      for (int k = 0; k < n; k++)  // 終端
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
}

int main() {
  int n, m;
  while(cin >> n, n != 0) {
    m = 0;
    d = Matrix(MAX_M, vector<int>(MAX_M, INF));
    for (int i = 0; i < MAX_M; i++) d[i][i] = 0;

    for (int i = 0; i < n; i++) {
      int from, to, dist;
      cin >> from >> to >> dist;
      d[from][to] = dist;
      d[to][from] = dist;
      
      // 初期状態では町の数がわからないので、道情報を読み込みながら調べる
      m = max(m, from+1);
      m = max(m, to+1);
    }
    warshall_floyd(m);
    int min_m = -1, min_dist = INF;

    for (int i = 0; i < m; i++) {
      int sum = 0;
      for (int j = 0; j < m; j++) {
        sum += d[i][j];
      }
      if (sum < min_dist) {
        min_dist = sum;
        min_m = i;
      }
    }
    cout << min_m << " " << min_dist << endl;
  }
  return 0;
}