#include<cstdio>
#include<algorithm>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  int N, n[200], d[200], x[200], y[200], mx, my, Mx, My;
  while (1) {
    scanf("%d", &N);
    if (N == 0) break;
    x[0] = y[0] = 0;
    mx = my = Mx = My = 0;
    for (int i = 1; i < N; i++) {
      scanf("%d%d", &n[i], &d[i]);
      x[i] = x[n[i]] + dx[d[i]];
      y[i] = y[n[i]] + dy[d[i]];
      mx = min(mx, x[i]);
      Mx = max(Mx, x[i]);
      my = min(my, y[i]);
      My = max(My, y[i]);
    }
    printf("%d %d\n", Mx - mx + 1, My - my + 1);
  }
}
