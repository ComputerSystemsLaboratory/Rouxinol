#include<bits/stdc++.h>
using namespace std;

int W,H,N;
int fid[20][20];

int main()
{
    while(scanf("%d%d",&W,&H),H + W)
    {
        //?????????
        for(int i = 0; i <= H; i++)
        {
            for(int j = 0; j <= W; j++)
            {
                fid[i][j] = 0;
            }
        }
        scanf("%d",&N);
        for(int i = 0; i < N; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            fid[y][x] = -1;
        }
        for(int i = 1; i <= H; i++)
        {
            for(int j = 1; j <= W; j++)
            {
                if(i == 1 && j == 1)fid[i][j] = 1;
                else
                {
                    if(fid[i][j] == -1)continue;
                    fid[i][j] = (fid[i - 1][j] != -1) * fid[i - 1][j] +
                                (fid[i][j - 1] != -1) * fid[i][j - 1];
                }
            }
        }
        printf("%d\n",fid[H][W]);
    }

}