#include<stdio.h>

int main(void){
  int W,H,x,y,r;

  scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
  puts((x-r<0||x+r>W||y-r<0||y+r>H)?"No":"Yes");
  return 0;
}