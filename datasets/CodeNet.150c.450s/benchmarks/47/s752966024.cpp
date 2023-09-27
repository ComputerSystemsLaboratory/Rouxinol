#include <stdio.h>

int main(void){
  int W,H,x,y,r,min;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  if(x<W && y<H){
    if(x<=y){
      min = x;
    }else{
      min = y;
    }
    if(r<=min){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    printf("No\n");
  }
}