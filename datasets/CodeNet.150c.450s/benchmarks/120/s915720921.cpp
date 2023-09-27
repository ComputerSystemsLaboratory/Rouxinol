//Osenbei
#include <stdio.h>
#include <string.h>
int A[10001];

int main(){
  int C, R, tmp, mask, ans, a, b, i, j;
  while(1){
    scanf("%d %d", &C, &R);
    if((C | R) == 0){
      break;
    }
    memset(A, 0, sizeof(A));
    for(i = 0; i < C; ++i){
      for(j = 0; j < R; ++j){
        scanf("%d", &tmp);
        A[j] += tmp << i;
      }
    }
    ans = 0;
    for(mask = 0; mask < (1 << C); ++mask){
      //printf("mask = %d \n", mask);
      a = 0;
      for(i = 0; i < R; ++i){
        tmp = A[i] ^ mask;
        //printf("%d", tmp);
        b = 0;
        while(tmp != 0){
          if((tmp & 1) == 1){
            b++;
          }
          tmp = tmp >> 1;
        }
        a += b > C - b ? b : C - b;
      }
      //printf(" a = %d \n", a);
      if(ans < a){
        ans = a;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}