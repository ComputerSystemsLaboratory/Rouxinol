#include<stdio.h>

void call(int n){
  int i,x;

  for(i=1;i<=n;i++){
    x=i;
    if(x%3==0){
      printf(" %d",i);
    }else{
      for(;x;x/=10){
        if(x%10==3){
          printf(" %d",i);
          break;
        }
      }
    }
  }
  putchar('\n');
}

int main(void){
  int n;

  scanf("%d",&n);
  call(n);
  return 0;
}