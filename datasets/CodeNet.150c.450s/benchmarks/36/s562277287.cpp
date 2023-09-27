#include <stdio.h>

int f(int n){
  return n*n;
}

int main(){
  int n;
  while(scanf("%d", &n)!=EOF){
    long long int v=0;
    for(int i=1;i<600/n;i++){
      v += f(n*i)*n;
    }
    printf("%lld\n", v);
  }
}