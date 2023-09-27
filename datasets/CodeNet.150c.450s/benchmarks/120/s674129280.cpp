#include <stdio.h>

#include <algorithm>

using namespace std;

int W, H;
int m[10][10000];

int max_one;

void calculate() {
  int cur = 0;
  for (int c = 0; c < W; ++c) {
    int one_count = 0;
    for (int r = 0; r < H; ++r) {
      one_count += m[r][c];
    }
    cur += max(one_count, H - one_count);
  }
  max_one = max(max_one, cur);
}

void permute(int r) {
  if (r == H) {
    calculate();
    return;
  }
  permute(r + 1);
  for (int i = 0; i < W; ++i) {
    m[r][i] = 1 - m[r][i];
  }
  permute(r + 1);
  for (int i = 0; i < W; ++i) {
    m[r][i] = 1 - m[r][i];
  }
}

int getMaxOne() {
  max_one = 0;
  permute(0); 
  return max_one;
}

int main() {
  //freopen("Osenbei.in", "r", stdin);
  while (scanf("%d%d", &H, &W) == 2 && H != 0 && W != 0) {
    for (int r = 0; r < H; ++r) {
      for (int c = 0; c < W; ++c) {
        scanf("%d", &m[r][c]);
      }
    }
    int result = getMaxOne();
    printf("%d\n", result);
  }
  return 0;
}