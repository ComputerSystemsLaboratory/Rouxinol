#include <cstdio>

using namespace std;

int N, M;
char table[256];
char buf[10];

int main() {
  for (;;) {
    fgets(buf, 10, stdin);
    sscanf(buf, "%d", &N);
    if (N == 0) { break; }

    for (int i = 0; i < 256; i++) {
      table[i] = i;
    }

    for (int i = 0; i < N; i++) {
      fgets(buf, 10, stdin);
      table[(int)buf[0]] = buf[2];
    }

    scanf("%d ", &M);

    for (int i = 0; i < M; i++) {
      fgets(buf, 10, stdin);
      printf("%c", table[(int)buf[0]]);
    }
    printf("\n");
  }
  return 0;
}