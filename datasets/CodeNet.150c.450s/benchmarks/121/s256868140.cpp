#include<cstdio>
#include<cstring>
using namespace std;
const int MAX = 150;
char map[MAX][MAX];
int state[MAX][MAX];
int dirx[4]={1,0,-1,0},diry[4]={0,1,0,-1};//4个?找方向
int H,W;
void dfs(int x,int y)
{
    if(state[x][y]) return;
    state[x][y]=1;
    for(int i=0;i<4;i++)
    {
        int dx=x+dirx[i];
        int dy=y+diry[i];
        if(dx>=0&&dx<H&&dy>=0&&dy<W&&map[dx][dy]==map[x][y])
          dfs(dx,dy);
    }
}
int solve()
{
    int res=0;
    for(int i=0;i<H;i++)
    for(int j=0;j<W;j++)
    {
        if(!state[i][j])
        {
            res++;
            dfs(i,j);
        }
    }
    return res;
}
int main()
{
    while(scanf("%d%d",&H,&W)&&H!=0&&W!=0)
    {
        memset(state,0,sizeof(state));
        for(int i=0;i<H;i++)
            scanf("%s",map[i]);
        printf("%d\n",solve());
    }

    return 0;
}