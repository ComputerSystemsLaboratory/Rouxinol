#include <cstdio>
#include <math.h>
#include <utility>

using namespace std;

int main ()
{
  int n, m;
  int b[100];
  int c[100];

  scanf("%d %d", &n, &m);
  int A[100][100];


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }

  for (int i = 0; i < n; i++) {
    c[i] = 0;
    for (int j = 0; j < m; j++) {
      c[i] += A[i][j] * b[j];
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", c[i]);
  }

  return 0;
}