//============================================================================
// Name        : AOJ1180.cpp
// Author      : mizo0203
// Version     :
// Copyright   : Your copyright free
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <functional>
using namespace std;

int a0, L;

bool input() {
  scanf("%d %d", &a0, &L);
  if (!a0 && !L)
    return false;
  return true;
}

int main() {
  int i, j;
  char a[21][7];
  char b[2][7];

  while (input()) {
    sprintf(a[0], "%0*d", L, a0);
    //printf("%s\n", a[0]);

    for (i = 1;; i++) {
      strcpy(b[0], a[i - 1]);
      strcpy(b[1], a[i - 1]);
      sort(b[0], b[0] + L);
      sort(b[1], b[1] + L, greater<int>());
      sprintf(a[i], "%0*d", L, atoi(b[1]) - atoi(b[0]));
      //printf("%s=%s-%s\n", a[i], b[1], b[0]);

      for (j = 0; j < i; j++) {
        if (!strcmp(a[j], a[i])) {
          printf("%d %d %d\n", j, atoi(a[j]), i - j);
          break;
        }
      }
      if (j != i)
        break;

    }
  }

  return 0;
}