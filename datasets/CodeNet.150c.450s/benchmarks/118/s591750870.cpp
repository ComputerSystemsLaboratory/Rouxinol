//============================================================================
// Name        : AOJ1179.cpp
// Author      : mizo0203
// Version     :
// Copyright   : Your copyright free
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
using namespace std;

int remnant[999][10][20];
int n;
int Y, M, D;

int main() {
  int i, j, k;
  int cnt = 1;

  for (i = 999; i > 0; i--) {
    for (j = 10; j > 0; j--) {
      if (i % 3 != 0 && j % 2 == 0) {
        k = 19;
      } else {
        k = 20;
      }
      for (; k > 0; k--) {
        remnant[i - 1][j - 1][k - 1] = cnt;
        cnt++;
      }
    }
  }

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &Y, &M, &D);
    printf("%d\n", remnant[Y - 1][M - 1][D - 1]);
  }

  return 0;
}