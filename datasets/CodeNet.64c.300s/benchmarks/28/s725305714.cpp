#include <stdio.h>

int main(void)
{
  int W,H,x,y,r,minx,miny,maxx,maxy;
  scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
  minx = x - r;
  miny = y - r;
  maxx = x + r;
  maxy = y + r;
  if (W > 0 && H > 0){
    if (maxx <= W && maxy <= H && minx >= 0 && miny >= 0){printf("Yes\n");}else{printf("No\n");}
  }
  if(W > 0 && H < 0){
    if (maxx <= W && maxy <= 0 && minx >= 0 && miny >= H){printf("Yes\n");}else{printf("No\n");}
  }
  if(W < 0 && H < 0){
    if (maxx <= 0 && maxy <= 0 && minx >= W && miny >= H){printf("Yes\n");}else{printf("No\n");}
  }
  if(W < 0 && H > 0){
    if (maxx <= 0 && maxy >= H && minx >= W && miny >= 0){printf("Yes\n");}else{printf("No\n");}
  }
}

