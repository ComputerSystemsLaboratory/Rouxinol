#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int w,h,sx,sy;
int dx[4]= {1,0,-1,0},dy[4] = {0,1,0,-1};
char fruit[1000][1000];
//int flag[1000][1000];
int num;

void dfs(int x,int y,char c)
{
    fruit[x][y]='.';
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if(nx<h&&nx>=0&&ny<w&&ny>=0&&fruit[nx][ny]==c)
            dfs(nx,ny,fruit[nx][ny]);
    }
}

void solve()
{
    while(cin>>h>>w&&w&&h)
    {
        num = 0;
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
                cin>>fruit[i][j];
        }
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                if(fruit[i][j]!='.')
                {
                    dfs(i,j,fruit[i][j]);
                    num++;
                }
            }
        }
        printf("%d\n",num);
    }
}
int main(void)
{
    solve();
    return 0 ;
}

