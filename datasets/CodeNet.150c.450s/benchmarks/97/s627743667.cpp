/*
 * Problem     : AOJ1165
 * Title       : Pablo Squarson's Headache (角角画伯，かく悩みき)
 * Author      : mizo0203
 * Copyright   : Your copyright free
 * Description : やるだけ
 */

#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;

int N;
int nx[200], ny[200];
int minx, maxx, miny, maxy;

bool input() {
  int i, n, d;

  scanf("%d", &N);
  if (!N)
    return false;
  nx[0] = 0;
  ny[0] = 0;
  for (i = 1; i < N; i++) {
      scanf("%d %d", &n, &d);
      switch (d) {
      case 0:
        nx[i] = nx[n] - 1;
        ny[i] = ny[n];
        break;
      case 1:
        nx[i] = nx[n];
        ny[i] = ny[n] + 1;
        break;
      case 2:
        nx[i] = nx[n] + 1;
        ny[i] = ny[n];
        break;
      case 3:
        nx[i] = nx[n];
        ny[i] = ny[n] - 1;
        break;
      }
  }

  return true;
}

int main() {
  int i;

  while (input()) {
    minx = 0;
    miny = 0;
    maxx = 0;
    maxy = 0;
    for (i = 1; i < N; i++) {
      if (minx > nx[i]) minx = nx[i];
      else if (maxx < nx[i]) maxx = nx[i];
      if (miny > ny[i]) miny = ny[i];
      else if (maxy < ny[i]) maxy = ny[i];
    }
    printf("%d %d\n", maxx - minx + 1, maxy - miny + 1);
  }

  return 0;
}