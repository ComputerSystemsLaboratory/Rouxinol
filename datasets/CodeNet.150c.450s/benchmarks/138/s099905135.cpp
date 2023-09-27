#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x==y) printf("%d\n",x);
    else
    {
        int z,Z,n,k;
        if(x<y) z=x,Z=y;
        else    z=y,Z=x;
        int r;
        for(;;)
        {
              r=Z%z;
              if(r==0) break;
              Z=z;
              z=r;
         }
         printf("%d\n",z);
     }
     return 0;
}