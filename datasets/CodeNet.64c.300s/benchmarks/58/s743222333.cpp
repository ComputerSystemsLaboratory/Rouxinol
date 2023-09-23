#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;
int h,l;
int dp[101][101];
char g[101][101];
int ans;
int dx[5]={0,1,0,-1};
int dy[5]={1,0,-1,0};
void dfs(int x,int y,char c)
{
      g[x][y]=0;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];

//      if(nx<0|nx>h||ny<0||ny>l||g[nx][ny]!=c)
//      {
//
//          continue;
//      }
//      else
//      {
//          g[nx][ny]=0;
//          dfs(nx,ny,c);
//      }
    if(nx>=0&&nx<h&&ny>=0&&ny<l&&g[nx][ny]==c)
           dfs(nx,ny,c);

    }
}
int main()
{
    while(scanf("%d%d",&h,&l))
    {
        ans=0;
        memset(dp,0,sizeof(dp));
        if(h==0&&l==0)  break;
        for(int i=0;i<h;i++)
           // for(int j=0;j<l;j++)
               scanf("%s",g[i]);
        for(int i=0;i<h;i++)
        for(int j=0;j<l;j++)
        {
            if(g[i][j]!=0)
            {
                ans++;
                dfs(i,j,g[i][j]);
            }
        }
        cout<<ans<<endl;
    }

}