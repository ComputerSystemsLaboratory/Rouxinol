#include <cstdio>

using namespace std;
#define INF 1000000000

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; ++i) {
    int B = 0, C = 0;
    bool ans = true;
    for (int j = 0; j < 10; ++j) {
      int A;
      scanf("%d", &A);
      int diffB = INF, diffC = INF;
      if (A > B) diffB = A - B;
      if (A > C) diffC = A - C;
      if (diffB == INF && diffC == INF) ans = false;
      if (diffB < diffC) B = A;
      else C = A;
    }
    if (ans) puts("YES");
    else puts("NO");
  }
}