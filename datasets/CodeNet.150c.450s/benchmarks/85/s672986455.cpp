#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  // l × m 行列と m × n 行列の積では、l × m × n 回の計算が生じる
  // M_i を p_i-1 × p_i 行列とすると、M_i × M_i+1 の計算回数は、p_i-1 × p_i × p_i+1 となる
  // M_1, M_2, M_3 が与えられたとき、((M_1 × M_2) × M_3) と (M_1 × (M_2 × M_3)) の計算量が少ない方を選択する

  // p:M_i を p_i-1 × p_i 行列とする
  vector<int> p(n+1);
  for (int i = 1; i <= n; i++) {
    cin >> p[i-1] >> p[i];
  }

  // cost[i][j]:M_i から M_j までの最小計算量
  vector<vector<int>> cost(n+1, vector<int> (n+1));

  // i から l 個まで調べる
  for (int l = 2; l <= n; l++) {
    for (int i = 1; i <= n - l + 1; i++) {
      // i から l までの個数
      int j = i + l - 1;
      // 大きい数値を入れておく
      cost[i][j] = 1000000007;
      // i から j 回調べる
      for (int k = i; k < j; k++){
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k+1][j] + p[i - 1] * p[k] * p[j]);
      }
    }
  }

  cout << cost[1][n] << endl;

  return 0;

}
