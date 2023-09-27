#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1000000;
const int INF = 1000000000;

int dp_nat[MAX_N]; // dp_nat[i]: 数字iを作るための最小の正四面体の個数
int dp_odd[MAX_N]; // dp_odd[i]: 数字iを作るための最小の奇数の正四面体の個数

vector<int> tetras; // 正四面体数
vector<int> odd_tetras; // 奇数の正四面体数

int main() {
  // 正四面体数を事前に計算しておく
  for(int i = 1; 1; i++) {
    int m = i*(i+1)*(i+2)/6;
    if (m > MAX_N) break;
    tetras.push_back(m);
    if (m % 2 != 0) odd_tetras.push_back(m);
  }

  // 入力のnによらずdp_natとdp_oddの中身は同じになるので、入力を読む前に計算しておく

  // 全ての正四面体数を使ったパターン
  dp_nat[0] = 0;
  for (int i = 1; i < MAX_N; i++) {
    dp_nat[i] = INF;
    for (int j = 0; j < tetras.size(); j++) {
//    cout << "dbg" << i << "," << dp_nat[i] << endl;
      if (i - tetras[j] < 0) break;
      dp_nat[i] = min(dp_nat[i], dp_nat[i - tetras[j]] + 1);
    }
  }

  // 奇数のみのパターン
  dp_odd[0] = 0;
  for (int i = 1; i < MAX_N; i++) {
    dp_odd[i] = INF;
    for (int j = 0; j < odd_tetras.size(); j++) {
      if (i - odd_tetras[j] < 0) break;
      dp_odd[i] = min(dp_odd[i], dp_odd[i - odd_tetras[j]] + 1);
    }
  }

  int n;
  while(cin >> n, n != 0) {
    cout << dp_nat[n] << " " << dp_odd[n] << endl;
  }
  return 0;
}