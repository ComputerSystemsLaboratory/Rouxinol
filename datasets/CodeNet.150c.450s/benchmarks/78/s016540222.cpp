#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  int const M = 1e6+10;
  // Mより小さい正四面体数を求める。
  vector<int> tet[2];
  for (int i=1; i<M; i++) {
    int t = i * (i+1) * (i+2) / 6;
    if (t >= M) break;
    tet[0].push_back(t);
    if (t % 2 == 1) {
      tet[1].push_back(t);
    }
  }
  int ans[2][M];
  for (int i=0; i<=1; i++) { // 両方並行して行う。
    ans[i][0] = 0;
    for (int j=1; j<M; j++) {
      int min = M;
      for (unsigned int k=0; k<tet[i].size(); k++) {
	if (tet[i][k] > j) break;
	if (min > ans[i][j-tet[i][k]] + 1) {
	  min = ans[i][j-tet[i][k]] + 1;
	}
      }
      ans[i][j] = min;
    }
  }
  int N;
  while (scanf("%d", &N) != EOF && N) {
    printf("%d %d\n", ans[0][N], ans[1][N]);
  }
}