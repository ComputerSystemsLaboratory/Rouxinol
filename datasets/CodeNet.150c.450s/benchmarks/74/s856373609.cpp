#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

const int INF (1<<28);
const int MAX_M = 20;
const int MAX_N = 50000;

int COINS[MAX_M+1];
int CNTS[MAX_M+1][MAX_N+1];

int main() {
  int n, m; cin >> n >> m;

  for (int i = 1; i <= m; i++)
    cin >> COINS[i];

  memset(CNTS, 0, sizeof(CNTS));

  for (int i = 0; i <= n; i++) CNTS[0][i] = INF;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      if (j - COINS[i] < 0)
        CNTS[i][j] = CNTS[i-1][j];
      else
        CNTS[i][j] = min(CNTS[i][j-COINS[i]] + 1, CNTS[i-1][j]);
    }
  }

  cout << CNTS[m][n] << endl;
}