#include<stdio.h>
const int MAX_V = 1000000;
int prime[MAX_V+1];
int main() {
  int i, k;
  for(i = 2; i <= MAX_V; i++) {
    prime[i] = 1;
  }
  for(i = 2; i*i <= MAX_V; i++) {
    if(prime[i]) {
      for(k = 2 * i; k <= MAX_V; k += i) {
        prime[k] = 0;
      }
    }
  }

  int right;
  int sum[MAX_V+1] = {0};
  sum[1] = 0;
  for(i = 1; i < MAX_V+1; i++){
    if(prime[i] == 1){
      sum[i + 1] = sum[i] + 1;
    }else{
      sum[i + 1] = sum[i];
    }
  }
  while(scanf("%d", &right) != EOF){
    printf("%d\n", sum[right + 1]);
  }
  return 0;
}