#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n;
int miny;
int maxy;
int minx;
int maxx;
int xs[114514];
int ys[114514];

int main() {
  while (1) {
    scanf("%d", &n);
    if (n == 0) return 0;

    miny = 0;
    maxy = 0;
    minx = 0;
    maxx = 0;
    for (int i=1; i<=n-1; i++) {
      int ni, di;
      scanf("%d%d", &ni, &di);
      xs[i] = xs[ni] + dx[di];
      ys[i] = ys[ni] + dy[di];
      miny = min(miny, ys[i]);
      maxy = max(maxy, ys[i]);
      minx = min(minx, xs[i]);
      maxx = max(maxx, xs[i]);
    }

    printf("%d %d\n", maxx-minx+1, maxy-miny+1);
  }
}