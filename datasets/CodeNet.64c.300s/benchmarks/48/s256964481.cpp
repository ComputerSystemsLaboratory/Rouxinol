#include<stdio.h>

int main(){
  const int MAX_V = 1000000;
  int prime[MAX_V+1];
  int i, k, v;
  int ans;
  for(i = 2; i <= MAX_V; i++){
    prime[i] = 1;
  }
  for(i = 2; i*i <= MAX_V; i++){
    if(prime[i]){
      for(k = 2 * i; k <= MAX_V; k += i){
        prime[k] = 0;
      }
    }
  }
  while(scanf("%d", &v) != EOF){
    int count = 0;
    for(k = 2; k <= v; k++){
      ans = prime[k];
      if(ans == 1){
        count++;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}