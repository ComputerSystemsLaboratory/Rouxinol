#include <cstdio>
#include <algorithm>

#define MAX_R 11
#define MAX_C 10001

using namespace std;

int r, c;
int senbei[MAX_R][MAX_C];

int dfs(int d) {
  int ret = 0;
  if (d == r) {
    for (int i = 0; i < c; ++i) {
      int t = 0;
      for (int j = 0; j < r; ++j) {
        t += senbei[j][i];
      }
      ret += max(t, r - t);
    }
    return ret;
  }
  
  ret = dfs(d + 1);
  for (int i = 0; i < c; ++i) {
    senbei[d][i] = (senbei[d][i] + 1) % 2;
  }
  ret = max(ret, dfs(d + 1));
  for (int i = 0; i < c; ++i) {
    senbei[d][i] = (senbei[d][i] + 1) % 2;
  }
  return ret;
}

int main() {

  while (true) {
    scanf("%d %d", &r, &c);
    if (r == 0 && c == 0) break;
    
    for (int i = 0; i < r; ++i) {
      for (int j = 0; j < c; ++j) {
        scanf("%d", &senbei[i][j]);
      }
    }

    int ans = dfs(0);
    printf("%d\n", ans);
  }
  
  return 0;
}