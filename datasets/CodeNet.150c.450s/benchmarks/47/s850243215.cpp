#include <cstdio>

int main()
{
    int W,H,x,y,r;
    scanf("%d",&W);
    scanf("%d",&H);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&r);
    if(x < r || y < r || x + r > W || y + r > H)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    return 0;
}