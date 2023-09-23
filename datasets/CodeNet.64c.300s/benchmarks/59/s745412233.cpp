#include <stdio.h>

int isPrime(int);

int main(){
  int N,i,x,res = 0;
  scanf("%d",&N);
  for(i = 0 ; i < N ; i++){
    scanf("%d",&x);
    if(isPrime(x)){
      ++res;
    }
  }
  printf("%d\n",res);
  return 0;
}

int isPrime(int x){
  int i;
  if(x < 2){ return 0; }
  for(i = 2 ; i*i <= x ; i++){
    if(x % i == 0){ return 0; }
  }
  return 1;
}