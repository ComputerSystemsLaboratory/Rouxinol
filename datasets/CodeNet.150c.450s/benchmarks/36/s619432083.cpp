/*
 * Problem     : AOJ0014
 * Title       : Integral
 * Author      : mizo0203
 * Copyright   : Your copyright free
 * Description : スタック
 */

#include <stdio.h>
#include <stack>
using namespace std;

int d, sum;

bool input() {

  if (scanf("%d", &d) == EOF)
    return false;

  return true;
}

int main() {
  int i;

  while (input()) {
    sum = 0;
    for (i = d; i < 600; i+=d) {
      sum += i * i * d;
    }
    printf("%d\n", sum);
  }

  return 0;
}