#include<iostream>
#include<cstring>
#define MAX_N 100+10
using namespace std;
char Map[MAX_N][MAX_N];
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
int W,H;
int ans;
void dfs(int x,int y,const char tree)
{
    Map[x][y]='.';
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=0&&nx<H&&ny>=0&&ny<W&&Map[nx][ny]==tree)
        {
            dfs(nx,ny,tree);
        }
    }
}
int main()
{
    while(cin>>H>>W,W!=0||H!=0)
    {
        ans=0;
        for(int i=0;i<H;i++)
            for(int j=0;j<W;j++)
            {
                cin>>Map[i][j];
            }
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(Map[i][j]!='.')
                {
                    dfs(i,j,Map[i][j]);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}