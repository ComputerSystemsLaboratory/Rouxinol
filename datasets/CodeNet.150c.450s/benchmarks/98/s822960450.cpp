#include <stdio.h>
#include <bits/stdc++.h>
void swap(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b =tmp;
}

int check(int n, int m, int T[], int H[]) {
  int T_sum = 0;
  int H_sum = 0;

  for (int i = 0; i < n; i++) {
    T_sum += T[i];
  }
  for (int i = 0; i < m; i++) {
    H_sum += H[i];
  }
  if (H_sum == T_sum) {
    return 0;
  }
  else {
    return -1;
  }
}

int main(void) {
  while(1) {
    int flag;
    int n,m;
    int T[1000] = {0}, H[1000] = {0};
    int i, j;
    scanf("%d%d", &n, &m);
    if (n == m && n == 0) {
      break;
    }
    for (i = 0; i < n; i++) {
      scanf("%d", &T[i]);
    }
    for (j = 0; j < m; j++) {
      scanf("%d", &H[j]);
    }
    
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        swap(&T[i], &H[j]);
        flag = check(n, m, T, H);
        if (flag == 0) {
          goto L1;
        }
        swap(&T[i], &H[j]);
      }
    }
  L1:
    if (flag == 0) {
      printf("%d %d\n",H[j], T[i]);
    }
    else {
      printf("-1\n");
    }
  }
  return 0;
}