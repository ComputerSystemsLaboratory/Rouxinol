#include <stdio.h>
int main()
{
    int w,h,n,x,y;
    while(1)
    {
        scanf("%d%d",&w,&h);
        if(w == 0&&h == 0)break;
        int mem[20][20] = {0};
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d",&y,&x);
            mem[x - 1][y - 1] = 1;
        }
        int dp[20][20] = {1};
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(mem[i][j] == 1)dp[i][j] = 0;
                else if(i != 0||j != 0)dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        printf("%d\n",dp[h - 1][w - 1]);
    }
    return 0;
}