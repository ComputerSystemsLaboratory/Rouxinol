#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_N = 100;
const int MAX_W = 10000;

int VS[MAX_N+1];
int WS[MAX_N+1];
int X[MAX_N+1][MAX_W+1];

int main() {
  int n, w; cin >> n >> w;

  for (int i = 1; i <= n; i++)
    cin >> VS[i] >> WS[i];

  memset(X, 0, sizeof(X));

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= w; j++) {
      if (WS[i] <= j)
        X[i][j] = max(X[i-1][j], X[i-1][j-WS[i]] + VS[i]);
      else
        X[i][j] = X[i-1][j];
    }
  }

  cout << X[n][w] << endl;
}