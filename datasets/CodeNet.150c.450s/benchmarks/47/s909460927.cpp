#include<stdio.h>
int main (void){

int W,H,x,y,r;

scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

  if(W<(x+r))printf("No\n");
  else if(W<(x-r))printf("No\n");
  else if(0>(x+r))printf("No\n");
  else if(0>(x-r))printf("No\n");
  else if(H<(y+r))printf("No\n");
  else if(H<(y-r))printf("No\n");
  else if(0>(y+r))printf("No\n");
  else if(0>(y-r))printf("No\n");
  else printf("Yes\n");






return 0;
}