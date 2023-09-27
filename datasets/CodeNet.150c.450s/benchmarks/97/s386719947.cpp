#include <cstdio>
#include <algorithm>

using namespace std;

int N;
int x[202], y[202];

int main() {
  while (true) {
    scanf("%d", &N);
    if (N == 0) break;
    x[0] = y[0] = 0;
    for (int i=1;i<N;i++) {
      int n, d;
      scanf("%d %d", &n, &d);
      switch (d) {
      case 0:
        x[i] = x[n]-1;
        y[i] = y[n];
        break;
      case 1:
        x[i] = x[n];
        y[i] = y[n]+1;
        break;
      case 2:
        x[i] = x[n]+1;
        y[i] = y[n];
        break;
      case 3:
        x[i] = x[n];
        y[i] = y[n]-1;
        break;
      }
    }
    sort(x, x+N);
    sort(y, y+N);
    printf("%d %d\n", x[N-1]-x[0]+1, y[N-1]-y[0]+1);
  }
  return 0;
}