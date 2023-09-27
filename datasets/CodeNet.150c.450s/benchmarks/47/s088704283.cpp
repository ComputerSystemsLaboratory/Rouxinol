#include <stdio.h>

int main()
{
    int W,H,x,y,r;
    scanf("%d",&W);
    scanf("%d",&H);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&r);

    if(((x-r)<0 || (x+r)>W)||((y-r)<0 ||(y+r)>H)){
            printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}