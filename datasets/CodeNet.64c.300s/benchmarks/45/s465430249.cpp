#include <cstdio>

int main() {
  int N, M, P;
  while (true) {
    scanf("%d %d %d", &N, &M, &P);
    if (N == 0 && M == 0 && P == 0) break;
    int sum = 0, won_X = 0;
    for (int i=1;i<=N;i++) {
      int X;
      scanf("%d", &X);
      sum += X;
      if (i == M) won_X = X;
    }
    printf("%d\n", (won_X > 0 ? (sum*(100-P)/won_X) : 0));
  }
  return 0;
}