/*
 * Problem     : AOJ1167
 * Title       : Pollock's conjecture (ポロック予想)
 * Author      : mizo0203
 * Language    : C++
 * Copyright   : Your copyright free
 * Description : 動的計画法
 */
#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int dp1[1000000];
int dp2[1000000];

void init() {
  int i, j;
  int tmp, cnt;

  tmp = 1;
  cnt = 1;
  while (tmp < 1000000) {
    //printf("%d\n", tmp);
    dp1[tmp] = 1;
    if (tmp % 2 == 1)
      dp2[tmp] = 1;
    cnt++;
    for (i = 1; i <= cnt; i++) {
      tmp += i;
    }
  }
  /*
   for (i = 500000; i > 0; i--) {
   if (!dp[i])
   continue;
   for (j = 1; i * j < 1000000; j++) {
   if (!dp[i * j] || dp[i * j] > dp[i] * j) {
   dp[i * j] = dp[i] * j;
   }
   }
   }
   */

  for (i = 1; i < 1000000; i++) {
    if (dp1[i] == 1) {
      for (j = i; i + j < 1000000; j++) {
        if (!dp1[i + j] || dp1[i + j] > dp1[i] + dp1[j])
          dp1[i + j] = dp1[i] + dp1[j];
      }
      if (dp2[i] == 1)
        for (j = i; i + j < 1000000; j++) {
          if (!dp2[i + j] || dp2[i + j] > dp2[i] + dp2[j])
            dp2[i + j] = dp2[i] + dp2[j];
        }
    }
  }
/*
  for (i = 1; i < 1000000; i++) {
    printf("%d\n", dp1[i]);
  }
  */
  //printf("%d\n", cnt);

}

bool input() {
  //int i;

  scanf("%d", &n);
  if (!n)
    return false;

  return true;
}

int main() {

  init();
  while (input()) {
    printf("%d %d\n", dp1[n], dp2[n]);
  }
  return 0;
}