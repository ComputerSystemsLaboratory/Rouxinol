#include <stdio.h>
int main(void) {
int w,h,x,y,r;
scanf("%d",&w);
scanf("%d",&h);
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&r);
if( x >= r && y >= r && w-x >= r && h-y >= r ) {
printf("Yes\n");
} else {
printf("No\n");
}
return 0;
}