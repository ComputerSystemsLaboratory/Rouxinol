#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
    int dp[100][100] = {0},built[100][100] = {0},x,y,n,X,Y,dx[] = {-1,0},dy[] = {0,-1};
    dp[1][1] = 1;
    scanf("%d%d%d",&x,&y,&n);
    if(x == 0 && y == 0)break;
    for(int i = 1;i <= n;i++){
        scanf("%d%d",&X,&Y);
        built[X][Y] = -1;
    }
    for(int i = 1;i <= x;i++){
        for(int j = 1;j <= y;j++){
            for(int k = 0;k < 2;k++){
                    if(built[i][j] >= 0){
                        dp[i][j] += dp[i + dx[k]][j + dy[k]];
                }
            }
        }
    }

    printf("%d\n",dp[x][y]);
    }

    return 0;
}