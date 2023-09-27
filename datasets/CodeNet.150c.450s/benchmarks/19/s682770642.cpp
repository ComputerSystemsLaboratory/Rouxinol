#include <stdio.h>

int main(){
  int x,y;
  while(scanf("%d%d",&x,&y)&&(x||y)){
    printf("%d %d\n",x<y?x:y,x<y?y:x);
  }
  return 0;
}