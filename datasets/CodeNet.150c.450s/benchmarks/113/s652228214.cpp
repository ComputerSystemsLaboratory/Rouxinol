#include<stdio.h>

int main(){
  int i,x;
  i=1;

  while(1){
    scanf("%d",&x);
    if(x != 0){
      printf("Case %d: %d\n",i,x);
      i++;
    } else {
      break;
    }
  
  }
} 