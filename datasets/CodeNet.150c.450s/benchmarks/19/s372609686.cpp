#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x==0 && y==0)
            return 0;
        else
        {
            if(x>y)
                printf("%d %d\n",y,x);
            else
                printf("%d %d\n",x,y);
        }
    }
}