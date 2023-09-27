#include <limits.h>
#include <stdio.h>
#include <string.h>

#include <algorithm>
#include <utility>

using namespace std;

int N;
int cost[10][10];

pair<int, int> getMinCost() {
  // Flood.
  for (int k = 0; k < N; ++k) {
    for (int i = 0; i < N; ++i) {
      for (int j = i + 1; j < N; ++j) {
        if (k == i || k == j) {
          continue;
        }
        if (cost[i][k] != -1 && cost[k][j] != -1) {
          int c = cost[i][k] + cost[k][j];
          if (cost[i][j] == -1 || cost[i][j] > c) {
            cost[i][j] = cost[j][i] = c;
          }
        }
      }
    }
  }
  int sum[10];
  for (int i = 0; i < N; ++i) {
    sum[i] = 0;
    for (int j = 0; j < N; ++j) {
      sum[i] += cost[i][j];
    }
  }
  pair<int, int> result;
  result.second = INT_MAX;
  for (int i = 0; i < N; ++i) {
    if (sum[i] < result.second) {
      result = make_pair(i, sum[i]);
    }
  }
  return result;
}

int main() {
  //freopen("ConvenientLocation.in", "r", stdin);
  int R;
  while (scanf("%d", &R) == 1 && R != 0) {
    N = 0;
    memset(cost, -1, sizeof(cost));
    for (int i = 0; i < 10; ++i) {
      cost[i][i] = 0;
    }
    int a, b, c;
    for (int i = 0; i < R; ++i) {
      scanf("%d%d%d", &a, &b, &c);
      N = max(N, max(a, b));
      if (cost[a][b] == -1 || cost[a][b] > c) {
        cost[a][b] = cost[b][a] = c;
      }
    }
    N++;
    pair<int, int> result = getMinCost();
    printf("%d %d\n", result.first, result.second);
  }
  return 0;
}