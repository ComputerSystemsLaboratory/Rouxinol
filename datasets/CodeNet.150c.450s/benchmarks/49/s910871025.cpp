#include<stdio.h>

int main(){
  int i, n, s;

  while (1) {
    scanf("%d", &n);
    if (n==0) {
      break;
    }
    int ans = 0, maxv = 0, minv = 1000;
    int score[n];
    for (i = 0; i < n; i++) {
      scanf("%d", &s);
      if (s > maxv) {
        maxv = s;
      }
      if (s < minv) {
        minv = s;
      }
      score[i] = s;
    }

    for (i = 0; i < n; i++) {
      ans += score[i];
    }

    printf("%d\n", (ans-maxv-minv)/(n-2));
  }
  return 0;
}