#include<stdio.h>
int main(){

int w,h;
int x,y,r;

scanf("%d%d",&w,&h);

scanf("%d%d%d",&x,&y,&r);

if(0<=x-r&&0<=y-r&&x+r<=w&&y+r<=h)printf("Yes\n");
else printf("No\n");

return 0;
}
