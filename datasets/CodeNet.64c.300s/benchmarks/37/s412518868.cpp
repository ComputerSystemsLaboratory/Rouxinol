#include <stdio.h>
#include <bits/stdc++.h>
int plus(int data[], int start, int num) {
  int sum = 0;
  for (int i = start; i < start+num; i++) {
    sum += data[i];
  }
  return sum;
}

int main(){
  int N;
  int i, j;
  scanf("%d", &N);
  while (N != 0) {
    int data[1000] = {0};
    int ctr = 0;
    for (i = 0; i < N; i++) {
      data[i] = i;
    }
    int sum = 0;
    for (i = 1; i < N-1; i++) { //?§?????±????
      for (j = 1; j <= N-i; j++) { //?????°?±????
        
        sum = plus(data,i,j);
        //    printf("sum = %d\n",sum);
        if (sum == N) {
          ctr++;
        }
      }
    }
    printf("%d\n", ctr);
    scanf("%d", &N);
  }
  return 0;
}