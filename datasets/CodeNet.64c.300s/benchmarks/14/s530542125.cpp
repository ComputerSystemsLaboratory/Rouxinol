#include <stdio.h>
int main ( )
{
int x,y;
    scanf("%d %d",&x,&y);
if(x>=-1000 && y<=1000 && y>=-1000 && y<=1000)
    {
    if(x<y)
    {
    printf("a < b\n");
    }
    if(x>y)
    {
    printf("a > b\n");
    }
    if(x==y)
    {
    printf("a == b\n");
    }
    }
return 0;
}







