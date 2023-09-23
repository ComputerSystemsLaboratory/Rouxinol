#include<stdio.h>
 
int main(void){
  int x,y;
 
  scanf("%d%d",&x,&y);
  while(x!=0||y!=0){
    printf("%d %d\n",x<y?x:y,x<y?y:x);
    scanf("%d%d",&x,&y);
  }
  return 0;
}