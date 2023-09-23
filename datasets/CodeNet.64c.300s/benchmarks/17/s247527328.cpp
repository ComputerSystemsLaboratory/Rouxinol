#include <stdio.h>
#include <bits/stdc++.h>

int main(){
  int a, b;
  int x, y, s;

  while (1) {
    int beforea, beforeb;
    int aftera, afterb;
    int max = 0;
    scanf("%d%d%d", &x, &y, &s);
    if (x == y && y == s && x == 0) break;
    for (a = 1; a < s; a++) {
      for (b = a; b < s; b++) {
        beforea = a*(100+x)/100;
        beforeb = b*(100+x)/100;
        aftera = a*(100+y)/100;
        afterb = b*(100+y)/100;
        if (beforea + beforeb == s) {
          if (max < aftera + afterb) {
            max = aftera+afterb;
            // printf("a = %d  b = %d\n",a,b);
            // printf("beforea = %d  beforeb = %d\n", beforea, beforeb);
            // printf("aftera = %d  afterb = %d\n", aftera, afterb);
          }
        }

      }
    }
    printf("%d\n",max);
  }
  return 0;
}