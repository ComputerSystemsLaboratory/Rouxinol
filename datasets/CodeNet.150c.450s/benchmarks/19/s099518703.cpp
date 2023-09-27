#include <stdio.h>
 
int main(void){
  int x,y,a;
 
  scanf("%d %d",&x,&y);
 
  while (x!=0 || y!=0) {
    if (x > y) {
      a = x;x = y;y = a;
    }
    printf("%d %d\n",x,y);
    scanf("%d %d",&x,&y);
  }
  return 0;
}