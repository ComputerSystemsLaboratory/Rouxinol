#include <iostream>
using namespace std;

const int MAX_N = 1000000;
const int INF = 1000000000;

int dp_nat[MAX_N]; // dp_nat[i]: 数字iを作るための最小の正四面体の個数
int dp_odd[MAX_N]; // dp_odd[i]: 数字iを作るための最小の奇数の正四面体の個数

int tetras[10000]; // tetras[i]: i番目の正四面体数(添え字は1から始まる)
int num_tetras = 0;

int main() {
  // 正四面体数を事前に計算しておく
  for(int i = 1; 1; i++) {
    int m = i*(i+1)*(i+2)/6;
    if (m > MAX_N) break;
    num_tetras++; // 配列は1始まりなので先にインクリメント
    tetras[num_tetras] = m;
  }

  // 入力のnによらずdp_natとdp_oddの中身は同じになるので、入力を読む前に計算しておく

  // 全ての正四面体数を使ったパターン
  dp_nat[0] = 0;
  for (int i = 1; i < MAX_N; i++) {
    dp_nat[i] = INF;
    for (int j = 1; j <= num_tetras; j++) {
//    cout << "dbg" << i << "," << dp_nat[i] << endl;
      if (i - tetras[j] < 0) break;
      dp_nat[i] = min(dp_nat[i], dp_nat[i - tetras[j]] + 1);
    }
  }

  // 奇数のみのパターン
  dp_odd[0] = 0;
  for (int i = 1; i < MAX_N; i++) {
    dp_odd[i] = INF;
    for (int j = 1; j <= num_tetras; j++) {
      if (i - tetras[j] < 0) break;
      if (tetras[j] % 2 != 0)
        dp_odd[i] = min(dp_odd[i], dp_odd[i - tetras[j]] + 1);
    }
  }

  int n;
  while(cin >> n, n != 0) {
    cout << dp_nat[n] << " " << dp_odd[n] << endl;
  }
  return 0;
}