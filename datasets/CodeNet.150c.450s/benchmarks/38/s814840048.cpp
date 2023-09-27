#include <stdio.h>
using namespace std;

int main(void) {
  int num;
  scanf("%d", &num);

  for (int i = 0; i < num; i++) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A*A+B*B == C*C || A*A+C*C == B*B || B*B+C*C==A*A) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

}