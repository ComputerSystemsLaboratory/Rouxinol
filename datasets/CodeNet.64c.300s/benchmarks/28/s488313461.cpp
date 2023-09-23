#include <stdio.h>
int main()
{
int W,H,x,y,r;
scanf("%d %d %d %d %d", &W,&H,&x,&y,&r);
if(x < r || x > W-r || y < r || y > H - r)
printf("No\n");
else
printf("Yes\n");

return 0;
}