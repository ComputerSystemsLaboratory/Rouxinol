#include<stdio.h>
int main(void)
{
 int W,H,x,y,r;
 scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

 if(x+r>W||x<r)
{printf("No\n");}
else if(y+r>H||y<r)
{printf("No\n");}
else
{printf("Yes\n");}






return 0;
}
