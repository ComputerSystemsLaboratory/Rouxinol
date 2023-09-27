
/*
 * main.cpp
 *
 *  Created on: 2011/04/08
 *      Author: satoki
 *      13:05 ~ 6:03
 */
#include <iostream>
#include <string.h>
using namespace std;

int iW;
int iN;
int iA;
int iB;

int iX[31];

void init() {
}

bool input() {
  int i, tmp;
  if (scanf("%d", &iW) == EOF) return false;
  for (i = 0; i <= iW; i++) {
    iX[i] = i;
  }
  scanf("%d", &iN);
  for (i = 0; i < iN; i++) {
    scanf("%d,%d", &iA, &iB);
    tmp = iX[iA];
    iX[iA] = iX[iB];
    iX[iB] = tmp;
  }
  return true;
}

void manage() {
}

int main() {
  int i;
  init();
    input();
    manage();
    for (i = 1; i <= iW; i++) {
      printf("%d\n", iX[i]);
    }
  return 0;
}