// Last Change: 12/29/2018 23:21:03.
//
// XとYの先頭に空白を入れることで、探索するべき要素のindexを0~m-1ではなく
// 1~mにしている。これにより、一番最初のcの更新において、i=j=0におけるc[i-1][j-1]
//すなわちc[-1][-1]にアクセスしてしまうことを防いでいる。
//
//***********************************************************************
//下から順番に計算していく方法
//
//***********************************************************************

#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

#define MAXLENGTH 1001

int LCS(string, string);

int LCS(string X, string Y) {
  static int c[MAXLENGTH][MAXLENGTH];
  for (int i = 0; i < MAXLENGTH; i++) {
    c[i][0] = c[0][i] = 0;
  }
  int m, n, maxL;
  m = X.size();
  n = Y.size();
  maxL = 0;
  X = ' ' + X;
  Y = ' ' + Y;
  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (X[i] == Y[j]) {
        c[i][j] = c[i - 1][j - 1] + 1;
      } else {
        c[i][j] = max(c[i - 1][j], c[i][j - 1]);
      }
      maxL = max(maxL, c[i][j]);
    }
  }
  return maxL;
}

int main() {
  int q;
  cin >> q;
  string X, Y;
  for (int i = 0; i < q; i++) {
    cin >> X >> Y;
    cout << LCS(X, Y) << endl;
  }
}

