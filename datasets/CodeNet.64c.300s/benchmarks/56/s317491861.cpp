#include <stdio.h>
#include <bits/stdc++.h>
int main(){
  int n;
  int i;
  int j,k,l;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    int y,m,d;
    int ans = 0;
    scanf("%d%d%d", &y, &m, &d);

    for (j = 1; j < y; j++) { // year_calc
      // printf("year\n");
      if (j%3 == 0) {
        ans += 200;
      }
      else {
        ans += 195;
      }
    }

    for (k = 1; k < m; k++) { // month_calc
      if (j%3 == 0) {
        ans += 20;
      }
      else {
        if (k%2 == 0) {
          ans += 19;
        }
        else {
          ans += 20;
        }
      }
    }
    ans += d;
    
    int minus = 0;
    for (j = 1; j < 999; j++) {
      if (j%3 == 0) {
        minus += 200;
      }
      else {
        minus += 195;
      }
    }
    for (k = 1; k <= 10; k++) { // month_calc
      //printf("j = %d\n",j);
      if (j%3 == 0) {
        minus += 20;
      }
      else {
        if (k%2 == 0) {
          minus += 19;
        }
        else {
          minus += 20;
        }
      }
    }
    
    printf("%d\n", minus - ans + 1);
  }
  return 0;
}