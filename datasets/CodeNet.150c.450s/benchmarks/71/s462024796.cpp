
/*
 * main.cpp
 *
 *  Created on: 2011/04/08
 *      Author: satoki
 *      5:01 ~ 5:09
 */
#include <iostream>
#include <string.h>
using namespace std;

int iN;

bool input() {
  if (scanf("%d", &iN) == EOF) return false;
  return true;
}

int manage() {
  int a, b, c, d, cnt = 0;
  for (a = 0; a < 10; a++) {
    for (b = 0; b < 10; b++) {
      for (c = 0; c < 10; c++) {
        for (d = 0; d < 10; d++) {
          if (a + b + c + d == iN) cnt++;
        }
      }
    }
  }
  return cnt;
}

int main() {
  while (1) {
    if (!input()) break;
    printf("%d\n", manage());
  }
  return 0;
}