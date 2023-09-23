#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  //printf("n = %d, m = %d\n", n, m);
  int A[100][100];
  int b[100];

  int i, j;
  int k;
  for(i = 0; i < n; i++) {
    j = 0;
	//printf("i = %d\n", i);
    while(cin >> k) {
      //printf("k = %d %d\n", k, j);
      A[i][j] = k;
      j++;
      if(j >= m) break;
    }
  }

  char nl;
  for(i = 0; i < m; i++) {
    scanf("%d%c", &b[i], &nl);
  }

  int c;
  for(i = 0; i < n; i++) {
    c = 0 ;
    for(j = 0; j < m; j++) {
      c += A[i][j] * b[j];
    }
    printf("%d\n", c);
  }
  return 0;
}