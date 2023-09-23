#include <stdio.h>
   
int main(){
   
  int W = 0;
  int H = 0;
  int x = 0;
  int y = 0;
  int r = 0;

  bool judge = true;

  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if ((x - r) < 0 || (x + r) > W){
    judge = false;
  }

  if ((y - r) < 0 || (y + r) > H){
    judge = false;
  }

  printf("%s\n", (judge ? "Yes" : "No"));

  return 0;

}