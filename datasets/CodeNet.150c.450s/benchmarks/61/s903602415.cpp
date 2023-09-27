#include <cstdio>
#include <vector>
using namespace std;

int main()
{
  int N, A, B, C, X;
  while (scanf("%d %d %d %d %d", &N, &A, &B, &C, &X) != EOF) {
    if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0)
      break;

    vector<int> Y(N);
    for (int i = 0; i < N; ++i)
      scanf("%d", &Y[i]);

    int f = 0, cnt = 0;
    for (; f <= 10000 && cnt < N; ++f) {
      if (X == Y[cnt])
	++cnt;
      X = (A * X + B) % C;
    }

    if (cnt < N)
      printf("-1\n");
    else
      printf("%d\n", --f);
  }
  return 0;
}