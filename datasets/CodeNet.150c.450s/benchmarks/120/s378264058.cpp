#include <cstdio>
using namespace std;

int r, c;
bool a[10][10000];
int max = 0;

void count() {
  int x, y;
  int sum = 0;
  for (int i=0; i<c; i++) {
    x = y = 0;
    for (int j=0; j<r; j++) {
      if (a[j][i]) x++;
      else y++;
    }
    sum += (x > y) ? x : y;
  }
  if (sum > max) max = sum;
}


void dfs(int n) {
  if (n == r) {
    count();
    return;
  }

  dfs(n+1);
  for (int i=0; i<c; i++) {
    a[n][i] = !a[n][i];
  }
  dfs(n+1);
}

int main() {
  int tmp;
  while (1) {
    scanf("%d %d", &r, &c);
    if (!r && !c) break;
    for (int i=0; i<r; i++) {
      for (int j=0; j<c; j++) {
        scanf("%d", &tmp);
        a[i][j] = tmp;
      }
    }
    dfs(0);
    printf("%d\n", max);
  }
  return 0;
}