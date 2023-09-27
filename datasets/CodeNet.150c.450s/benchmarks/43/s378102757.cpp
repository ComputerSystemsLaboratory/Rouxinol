#include <iostream>

using namespace std;

int main()
{
  int N;
  while (scanf("%d ", &N) == 1) {
    if (N == 0) {
      break;
    }
    int a = 0, b = 0, ta, tb;
    for (int i = 0; i < N; i++) {
      scanf("%d %d ", &ta, &tb);
      if (ta > tb) {
	a += ta + tb;
      } else if (ta < tb) {
	b += ta + tb;
      } else {
	a += ta, b += tb;
      }
    }
    printf("%d %d\n", a, b);
  }
  return 0;
}