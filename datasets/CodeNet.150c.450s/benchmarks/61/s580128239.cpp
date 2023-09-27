#include <cstdio>

int N, A, B, C, X;
int Y[100];

void updateX() {
  X = (A*X+B)%C;
}

int main() {
  while (true) {
    scanf("%d %d %d %d %d", &N, &A, &B, &C, &X);
    if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0) break;
    for (int i=0;i<N;i++) scanf("%d", &Y[i]);
    int cnt = N-1;
    for (int i=0;i<N;i++) {
      while (X != Y[i] && cnt < 10000) {
        updateX();
        cnt++;
      }
      if (X != Y[i]) {
        cnt = -1;
        break;
      }
      updateX();
    }
    printf("%d\n", cnt);
  }
  return 0;
}