#include<stdio.h>

void call(int n);

int main(){
  int n;
  scanf("%d", &n);
  call(n);
}


void call(int n){
  int x;
  for(int i=1; i <= n;i++){
    x = i;
    if ( x % 3 == 0 ){
      printf(" %d", i);
      continue;
    }
    while(x){
      if ( x % 10 == 3 ){
        printf(" %d", i);
        break;
      }
      x /= 10;
      }
    }
    printf("\n");
}

