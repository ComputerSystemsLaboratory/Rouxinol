#include <iostream>
#include <queue>
using namespace std;
int w,h;
int g[21][21];
bool visited[21][21];
int moves[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int count;
bool legal(int x, int y)
{
  if(visited[x][y]!=true&&0<=x&&x<h&&0<=y&&y<w&&g[x][y]==0)
    return true;
  else
    return false;
}

void dfs(int x,int y)
{
  visited[x][y]=true;
  count++;
  for(int i=0;i<4;i++)
  {
    int newx=x+moves[i][0];
    int newy=y+moves[i][1];
    if(legal(newx,newy))
    {
      dfs(newx,newy);
    }
  }
}

int main()
{
  while(1)
  {
    cin>>w>>h;
    if(w==0&&h==0) break;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
      {
        g[i][j]=-1;
        visited[i][j]=false;
      }
    int psx,psy;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
      {
        char s;
        cin>>s;
        switch(s)
        {
          case '.':
            g[i][j]=0;break;
          case '#':
            g[i][j]=1;break;
          case '@':
            g[i][j]=2;psx=i;psy=j;break;
        }
      }
    count=0;
    dfs(psx,psy);
/*    int count=0;
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
      {
        count+=visited[i][j];
      }
*/  cout<<count<<endl;

  }
}